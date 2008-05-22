#include <math.h>
#include <vector>
#include <iostream>
#include <TH1F.h>
#include <TCanvas.h>
#include <TStyle.h>
#include "CommonTools/include/EfficiencyEvaluator.hh"

EfficiencyEvaluator::EfficiencyEvaluator(const char* namefile) {
  _file = new TFile(namefile,"RECREATE");
  m_namefile = namefile;
  m_ymin = 0.0;
  m_ymax = 1.1;
}

EfficiencyEvaluator::~EfficiencyEvaluator() {
  delete _file;
}

void EfficiencyEvaluator::ComputeEfficiencies() {
  
  // total efficiency
  std::vector<TH1F*>::const_iterator numItr;
  for(numItr=_numerators.begin(); numItr!=_numerators.end(); ++numItr) {
    TH1F *eff = (TH1F*) (*numItr)->Clone((std::string((*numItr)->GetName())+"_Eff").c_str());
    eff->Sumw2();
    eff->Divide(*numItr, _denominator, 1, 1);
    for(int i=1;i<=eff->GetNbinsX();++i) {
      float effVal = eff->GetBinContent(i);
      float efferrVal = sqrt(effVal*(1-effVal)/(*numItr)->GetBinContent(i));
      eff->SetBinError(i,efferrVal);
    }
    _efficiencies.push_back(eff);
  }
  
  // partial efficiency
  std::vector<TH1F*>::const_iterator numPreviousItr=_numerators.begin();
  for(numItr=_numerators.begin(); numItr!=_numerators.end(); ++numItr) {
    TH1F *effPartial = (TH1F*) (*numItr)->Clone((std::string((*numItr)->GetName())+"_EffWrtPrevious").c_str());
    //    effPartial->SetName(name);
    effPartial->Sumw2();
    effPartial->Divide(*numItr, *numPreviousItr, 1, 1);
    for(int i=1;i<=effPartial->GetNbinsX();++i) {
      float effVal = effPartial->GetBinContent(i);
      float efferrVal = sqrt(effVal*(1-effVal)/(*numItr)->GetBinContent(i));
      effPartial->SetBinError(i,efferrVal);
    }
    _efficiencies.push_back(effPartial);
    if(numItr!=_numerators.begin()) ++numPreviousItr;
  }

}

void EfficiencyEvaluator::Write() {
  _file->cd();
  _denominator->Write();
  std::vector<TH1F*>::const_iterator numItr;
  for(numItr=_numerators.begin(); numItr!=_numerators.end(); ++numItr) {
    (*numItr)->Write();
  }
  std::vector<TH1F*>::const_iterator effItr;
  for(effItr=_efficiencies.begin(); effItr!=_efficiencies.end(); ++effItr) {
    (*effItr)->Write();
  }
  _file->Close();
}



void EfficiencyEvaluator::DrawSingle() {

  TCanvas c0;
  gStyle->SetOptStat(0);
  
  int ihisto = 0; // it is den / den = 1 by construction
  std::vector<TH1F*>::const_iterator effItr;
  for(effItr=_efficiencies.begin(); effItr!=_efficiencies.end(); ++effItr) {

    TH1F* histogram = *effItr;
    TString name = histogram->GetName();

    if ( name.Contains("EffWrtPrevious") ) {
      
      histogram->GetXaxis()->SetTitle(m_xtitle);
      histogram->GetYaxis()->SetTitle(m_ytitle);
      histogram->SetTitle(m_title);
      histogram->SetLineColor(ihisto);
      histogram->SetMinimum(m_ymin);
      histogram->SetMaximum(m_ymax);

      if (ihisto == 1 ) histogram->Draw("hist");
      else histogram->Draw("hist same");

      ihisto++;

    }
    
  }
  
  TString outfilename(m_namefile);
  outfilename.ReplaceAll(".root","-Single.png");
  c0.SaveAs(outfilename);

}



void EfficiencyEvaluator::DrawSequential() {

  TCanvas c0;
  gStyle->SetOptStat(0);
  
  int ihisto = 0; // it is den / den = 1 by construction
  std::vector<TH1F*>::const_iterator effItr;
  for(effItr=_efficiencies.begin(); effItr!=_efficiencies.end(); ++effItr) {

    TH1F* histogram = *effItr;
    TString name = histogram->GetName();

    if ( name.Contains("Eff") && !name.Contains("EffWrtPrevious") ) {
      
      histogram->GetXaxis()->SetTitle(m_xtitle);
      histogram->GetYaxis()->SetTitle(m_ytitle);
      histogram->SetTitle(m_title);
      histogram->SetLineColor(ihisto);
      histogram->SetMinimum(m_ymin);
      histogram->SetMaximum(m_ymax);

      if (ihisto == 1 ) histogram->Draw("hist");
      else histogram->Draw("hist same");

      ihisto++;

    }
    
  }
  
  TString outfilename(m_namefile);
  outfilename.ReplaceAll(".root","-Sequential.png");
  c0.SaveAs(outfilename);

}



void EfficiencyEvaluator::DrawAll() {

  DrawSingle();
  DrawSequential();

}
