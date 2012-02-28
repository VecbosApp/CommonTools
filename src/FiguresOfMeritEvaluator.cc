#include "CommonTools/include/FiguresOfMeritEvaluator.h"

#include <iostream>
#include "TCanvas.h"
#include "TLegend.h"
#include "TStyle.h"
#include "TObjArray.h"
#include "TObjString.h"
#include "TROOT.h"

using namespace std;

FiguresOfMeritEvaluator::FiguresOfMeritEvaluator() {

  m_xmin = 0.0;
  m_xmax = 1.0;
  m_ymin = 0.0;
  m_ymax = 1.0;

  m_signalTitle = "signal";
  m_backgroundTitle = "background";

  _labelFont        = 42;
  _labelOffset      = 0.015;
  _axisLabelSize    = 0.050;
  _titleOffset      = 1.6;
  
}

void FiguresOfMeritEvaluator::addSignal(const char *nameVar, TH1F* sig) {

  m_signalHisto.push_back(sig);
  m_names.push_back(TString(nameVar));

}

void FiguresOfMeritEvaluator::addBackgrounds(TH1F* bkg0, TH1F* bkg1, 
					     TH1F* bkg2, TH1F* bkg3) {

  if(bkg1) bkg0->Add(bkg1);
  if(bkg2) bkg0->Add(bkg2);
  if(bkg3) bkg0->Add(bkg3);

  m_bkgHisto.push_back(bkg0);

}

TGraph* FiguresOfMeritEvaluator::getFOM(const char *nameVar, int option) {
  
  TGraph *outGraph = new TGraph();

  int indexVar = -1;
  for(unsigned int ivar=0; ivar<m_signalHisto.size(); ivar++) {

    if (m_names[ivar].Contains(nameVar) && 
	TString(nameVar).Contains(m_names[ivar])) indexVar=ivar;
    
  }

  if ( indexVar==-1 ) {

    std::cout << "ERROR! The requested variable ( "
	      << nameVar << " ) is not in the list of known variables!" << std::endl;
    return 0;

  }

  TH1F *signal = m_signalHisto[indexVar];
  TH1F *background = m_bkgHisto[indexVar];
  const char *cutDir = m_direction[indexVar];

  if( signal && background ) {

    std::cout << "Integral of signal histogram " << signal->GetName() << " = " 
	      << signal->Integral() << std::endl;
    std::cout << "Integral of background histogram " << background->GetName() << " = " 
	      << background->Integral() << std::endl;
    
    TAxis *axisS = signal->GetXaxis();
    TAxis *axisB = background->GetXaxis();
    int nBinsSig = axisS->GetNbins();
    int nBinsBkg = axisB->GetNbins();
    
    if( nBinsSig!=nBinsBkg ) {
      std::cout << "ERROR! signal and background histograms have different binning." 
		<< std::endl;
      return 0;
    }

    // needed also overflow + underflow
    outGraph->Set(nBinsSig+2);

    double signalIntegral = signal->Integral(0,nBinsSig+1);
    double backgroundIntegral = background->Integral(0,nBinsSig+1);

    double tmpSignalIntegral=0.0;
    double tmpBackgroundIntegral=0.0;

    for ( int ibin=0; ibin<=nBinsSig+1; ibin++) {

      if( strcmp(cutDir,"<")==0 ) {
	tmpSignalIntegral = signal->Integral(0,ibin);
	tmpBackgroundIntegral = background->Integral(0,ibin);
      }
      else if( strcmp(cutDir,">")==0 ) {
	tmpSignalIntegral = signal->Integral(ibin,nBinsSig+1);
	tmpBackgroundIntegral = background->Integral(ibin,nBinsSig+1);
      }
      else {
	std::cout << "CONFIGURATION ERROR! direction of the cut not set." << std::endl
		  << "Please use: \">\" for var>x0 or  \"<\" for var<x0" << std::endl;
	return 0;
      }

      double signalEff = tmpSignalIntegral / signalIntegral;
      double backgroundEff = tmpBackgroundIntegral / backgroundIntegral;

      // std::cout << "bin =" << ibin << " sigEff=" << signalEff << " bkgEff=" << backgroundEff << std::endl;

      if( option == 0 ) {
	outGraph->SetPoint(ibin,signalEff,1-backgroundEff);
      }
      else if( option == 1 ) {
	outGraph->SetPoint(ibin,signalEff,backgroundEff);
      }
      else {
	std::cout << "unrecognized option" << std::endl;
	return 0;
      }

    }
  }

  else {
    std::cout << "ERROR! Cannot find signal or background histogram for variable "
	      << nameVar << std::endl;
    return 0;
  }

  return outGraph;

}

void FiguresOfMeritEvaluator:: drawResults(const char *fileName, int option) {

  gROOT->SetStyle("Plain");
  gStyle->SetOptStat(0);

  if( m_signalHisto.size()!=m_bkgHisto.size() ) {
    std::cout << "ERROR! for some variable or signal or background histo is missing. Exiting!" << std::endl;
    return;
  }
  

  TCanvas c1("c1","",600,600);

  TLegend* leg = new TLegend(0.10,0.10,0.50,0.40);
  leg->SetBorderSize(     0);
  leg->SetFillColor (     0);
  leg->SetTextAlign (    12);
  leg->SetTextFont  (_labelFont);
  leg->SetTextSize  (  0.05);
    

  for( unsigned int ivar=0; ivar<m_signalHisto.size(); ivar++) {

    const char *name = m_names[ivar].Data();

    TGraph *graph = getFOM(name);

    if( graph ) {

      std::cout << "---> processing " << name << "..."; 

      leg->AddEntry(graph,name,"p");

      graph->SetTitle("");
      graph->SetMarkerStyle(20);
      int defColor;
      if(ivar==0) defColor=kRed+1;
      else if(ivar==1) defColor=kAzure-6;
      else if(ivar==2) defColor=kTeal+3;
      else defColor = ivar+1;
      graph->SetMarkerColor(defColor);
      graph->SetLineColor(defColor);
      graph->SetLineWidth(2);
      graph->GetXaxis()->SetRangeUser(m_xmin,m_xmax);
      graph->GetYaxis()->SetRangeUser(m_ymin,m_ymax);
      
      std::string sigSuffix = " efficiency";
      std::string xAxisName = std::string(m_signalTitle) + sigSuffix;
      
      std::string bkgSuffix = (option==0) ? " rejection" : " efficiency";
      std::string yAxisName = std::string(m_backgroundTitle) + bkgSuffix;
      
      graph->GetXaxis()->SetTitle(xAxisName.c_str());
      graph->GetYaxis()->SetTitle(yAxisName.c_str());
      
      AxisFonts(graph->GetXaxis(), "x", graph->GetXaxis()->GetTitle());
      AxisFonts(graph->GetYaxis(), "y", graph->GetYaxis()->GetTitle());
      
      if(ivar==0) graph->Draw("APE2");
      else  graph->Draw("PE2");

      std::cout << " done." << std::endl;

    }
    else {
      std::cout << "WARNING! The requested variable " << name 
		<< " could not have been drawn" << std::endl;
    }

  }
  
  leg->Draw();
  
  TString fullname(fileName);
  TObjArray *tokens = fullname.Tokenize(".");
  const char *basename = (((TObjString*)(*tokens)[0])->GetString()).Data();

  TString pdf = TString(basename)+TString(".pdf");
  TString png = TString(basename)+TString(".png");

  c1.SaveAs(pdf);
  c1.SaveAs(png);
  
}

void FiguresOfMeritEvaluator::setRange(double xmin, double xmax, double ymin, double ymax) {

  m_xmin = xmin;
  m_xmax = xmax;
  m_ymin = ymin;
  m_ymax = ymax;

}

  //------------------------------------------------------------------------------
  // AxisFonts
  //------------------------------------------------------------------------------
void FiguresOfMeritEvaluator::AxisFonts(TAxis*  axis,
					TString coordinate,
					TString title)
{
  axis->SetLabelFont  (_labelFont  );
  // axis->SetLabelOffset(_labelOffset);
  // axis->SetLabelSize  (_axisLabelSize);
  // axis->SetNdivisions (  505);
  axis->SetTitleFont  (_labelFont);
  // axis->SetTitleOffset(  1.5);
  // axis->SetTitleSize  (_axisLabelSize);
  
  //  if (coordinate == "y") axis->SetTitleOffset(_titleOffset);
  
  axis->SetTitle(title);
}
