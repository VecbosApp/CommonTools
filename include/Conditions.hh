//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Nov  5 11:48:20 2008 by ROOT version 5.18/00a
// from TTree Conditions/Conditions
// found on file: default.root
//////////////////////////////////////////////////////////

#ifndef Conditions_h
#define Conditions_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

class Conditions {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Int_t           generation_step;
   Int_t           simulation_step;
   Int_t           digitisation_step;
   Int_t           L1simulation_step;
   Int_t           validation_step;
   Int_t           digi2raw_step;
   Int_t           HLTriggerFirstPath;
   Int_t           HLT_L1Jet15;
   Int_t           HLT_Jet30;
   Int_t           HLT_Jet50;
   Int_t           HLT_Jet80;
   Int_t           HLT_Jet110;
   Int_t           HLT_Jet180;
   Int_t           HLT_Jet250;
   Int_t           HLT_FwdJet20;
   Int_t           HLT_DoubleJet150;
   Int_t           HLT_DoubleJet125_Aco;
   Int_t           HLT_DoubleFwdJet50;
   Int_t           HLT_DiJetAve15;
   Int_t           HLT_DiJetAve30;
   Int_t           HLT_DiJetAve50;
   Int_t           HLT_DiJetAve70;
   Int_t           HLT_DiJetAve130;
   Int_t           HLT_DiJetAve220;
   Int_t           HLT_TripleJet85;
   Int_t           HLT_QuadJet30;
   Int_t           HLT_QuadJet60;
   Int_t           HLT_SumET120;
   Int_t           HLT_L1MET20;
   Int_t           HLT_MET25;
   Int_t           HLT_MET35;
   Int_t           HLT_MET50;
   Int_t           HLT_MET65;
   Int_t           HLT_MET75;
   Int_t           HLT_MET35_HT350;
   Int_t           HLT_Jet180_MET60;
   Int_t           HLT_Jet60_MET70_Aco;
   Int_t           HLT_Jet100_MET60_Aco;
   Int_t           HLT_DoubleJet125_MET60;
   Int_t           HLT_DoubleFwdJet40_MET60;
   Int_t           HLT_DoubleJet60_MET60_Aco;
   Int_t           HLT_DoubleJet50_MET70_Aco;
   Int_t           HLT_DoubleJet40_MET70_Aco;
   Int_t           HLT_TripleJet60_MET60;
   Int_t           HLT_QuadJet35_MET60;
   Int_t           HLT_IsoEle15_L1I;
   Int_t           HLT_IsoEle18_L1R;
   Int_t           HLT_IsoEle15_LW_L1I;
   Int_t           HLT_LooseIsoEle15_LW_L1R;
   Int_t           HLT_Ele10_SW_L1R;
   Int_t           HLT_Ele15_SW_L1R;
   Int_t           HLT_Ele15_LW_L1R;
   Int_t           HLT_EM80;
   Int_t           HLT_EM200;
   Int_t           HLT_DoubleIsoEle10_L1I;
   Int_t           HLT_DoubleIsoEle12_L1R;
   Int_t           HLT_DoubleIsoEle10_LW_L1I;
   Int_t           HLT_DoubleIsoEle12_LW_L1R;
   Int_t           HLT_DoubleEle5_SW_L1R;
   Int_t           HLT_DoubleEle10_LW_OnlyPixelM_L1R;
   Int_t           HLT_DoubleEle10_Z;
   Int_t           HLT_DoubleEle6_Exclusive;
   Int_t           HLT_IsoPhoton30_L1I;
   Int_t           HLT_IsoPhoton10_L1R;
   Int_t           HLT_IsoPhoton15_L1R;
   Int_t           HLT_IsoPhoton20_L1R;
   Int_t           HLT_IsoPhoton25_L1R;
   Int_t           HLT_IsoPhoton40_L1R;
   Int_t           HLT_Photon15_L1R;
   Int_t           HLT_Photon25_L1R;
   Int_t           HLT_DoubleIsoPhoton20_L1I;
   Int_t           HLT_DoubleIsoPhoton20_L1R;
   Int_t           HLT_DoublePhoton10_Exclusive;
   Int_t           HLT_L1Mu;
   Int_t           HLT_L1MuOpen;
   Int_t           HLT_L2Mu9;
   Int_t           HLT_IsoMu9;
   Int_t           HLT_IsoMu11;
   Int_t           HLT_IsoMu13;
   Int_t           HLT_IsoMu15;
   Int_t           HLT_Mu3;
   Int_t           HLT_Mu5;
   Int_t           HLT_Mu7;
   Int_t           HLT_Mu9;
   Int_t           HLT_Mu11;
   Int_t           HLT_Mu13;
   Int_t           HLT_Mu15;
   Int_t           HLT_Mu15_L1Mu7;
   Int_t           HLT_Mu15_Vtx2cm;
   Int_t           HLT_Mu15_Vtx2mm;
   Int_t           HLT_DoubleIsoMu3;
   Int_t           HLT_DoubleMu3;
   Int_t           HLT_DoubleMu3_Vtx2cm;
   Int_t           HLT_DoubleMu3_Vtx2mm;
   Int_t           HLT_DoubleMu3_JPsi;
   Int_t           HLT_DoubleMu3_Upsilon;
   Int_t           HLT_DoubleMu7_Z;
   Int_t           HLT_DoubleMu3_SameSign;
   Int_t           HLT_DoubleMu3_Psi2S;
   Int_t           HLT_BTagIP_Jet180;
   Int_t           HLT_BTagIP_Jet120_Relaxed;
   Int_t           HLT_BTagIP_DoubleJet120;
   Int_t           HLT_BTagIP_DoubleJet60_Relaxed;
   Int_t           HLT_BTagIP_TripleJet70;
   Int_t           HLT_BTagIP_TripleJet40_Relaxed;
   Int_t           HLT_BTagIP_QuadJet40;
   Int_t           HLT_BTagIP_QuadJet30_Relaxed;
   Int_t           HLT_BTagIP_HT470;
   Int_t           HLT_BTagIP_HT320_Relaxed;
   Int_t           HLT_BTagMu_DoubleJet120;
   Int_t           HLT_BTagMu_DoubleJet60_Relaxed;
   Int_t           HLT_BTagMu_TripleJet70;
   Int_t           HLT_BTagMu_TripleJet40_Relaxed;
   Int_t           HLT_BTagMu_QuadJet40;
   Int_t           HLT_BTagMu_QuadJet30_Relaxed;
   Int_t           HLT_BTagMu_HT370;
   Int_t           HLT_BTagMu_HT250_Relaxed;
   Int_t           HLT_DoubleMu3_BJPsi;
   Int_t           HLT_DoubleMu4_BJPsi;
   Int_t           HLT_TripleMu3_TauTo3Mu;
   Int_t           HLT_IsoTau_MET65_Trk20;
   Int_t           HLT_IsoTau_MET35_Trk15_L1MET;
   Int_t           HLT_LooseIsoTau_MET30;
   Int_t           HLT_LooseIsoTau_MET30_L1MET;
   Int_t           HLT_DoubleIsoTau_Trk3;
   Int_t           HLT_DoubleLooseIsoTau;
   Int_t           HLT_IsoEle8_IsoMu7;
   Int_t           HLT_IsoEle10_Mu10_L1R;
   Int_t           HLT_IsoEle12_IsoTau_Trk3;
   Int_t           HLT_IsoEle10_BTagIP_Jet35;
   Int_t           HLT_IsoEle12_Jet40;
   Int_t           HLT_IsoEle12_DoubleJet80;
   Int_t           HLT_IsoEle5_TripleJet30;
   Int_t           HLT_IsoEle12_TripleJet60;
   Int_t           HLT_IsoEle12_QuadJet35;
   Int_t           HLT_IsoMu14_IsoTau_Trk3;
   Int_t           HLT_IsoMu7_BTagIP_Jet35;
   Int_t           HLT_IsoMu7_BTagMu_Jet20;
   Int_t           HLT_IsoMu7_Jet40;
   Int_t           HLT_NoL2IsoMu8_Jet40;
   Int_t           HLT_Mu14_Jet50;
   Int_t           HLT_Mu5_TripleJet30;
   Int_t           HLT_BTagMu_Jet20_Calib;
   Int_t           HLT_ZeroBias;
   Int_t           HLT_MinBias;
   Int_t           HLT_MinBiasHcal;
   Int_t           HLT_MinBiasEcal;
   Int_t           HLT_MinBiasPixel;
   Int_t           HLT_MinBiasPixel_Trk5;
   Int_t           HLT_BackwardBSC;
   Int_t           HLT_ForwardBSC;
   Int_t           HLT_CSCBeamHalo;
   Int_t           HLT_CSCBeamHaloOverlapRing1;
   Int_t           HLT_CSCBeamHaloOverlapRing2;
   Int_t           HLT_CSCBeamHaloRing2or3;
   Int_t           HLT_TrackerCosmics;
   Int_t           AlCa_IsoTrack;
   Int_t           AlCa_EcalPhiSym;
   Int_t           AlCa_EcalPi0;
   Int_t           HLTriggerFinalPath;

   // List of branches
   TBranch        *b_generation_step;   //!
   TBranch        *b_simulation_step;   //!
   TBranch        *b_digitisation_step;   //!
   TBranch        *b_L1simulation_step;   //!
   TBranch        *b_validation_step;   //!
   TBranch        *b_digi2raw_step;   //!
   TBranch        *b_HLTriggerFirstPath;   //!
   TBranch        *b_HLT_L1Jet15;   //!
   TBranch        *b_HLT_Jet30;   //!
   TBranch        *b_HLT_Jet50;   //!
   TBranch        *b_HLT_Jet80;   //!
   TBranch        *b_HLT_Jet110;   //!
   TBranch        *b_HLT_Jet180;   //!
   TBranch        *b_HLT_Jet250;   //!
   TBranch        *b_HLT_FwdJet20;   //!
   TBranch        *b_HLT_DoubleJet150;   //!
   TBranch        *b_HLT_DoubleJet125_Aco;   //!
   TBranch        *b_HLT_DoubleFwdJet50;   //!
   TBranch        *b_HLT_DiJetAve15;   //!
   TBranch        *b_HLT_DiJetAve30;   //!
   TBranch        *b_HLT_DiJetAve50;   //!
   TBranch        *b_HLT_DiJetAve70;   //!
   TBranch        *b_HLT_DiJetAve130;   //!
   TBranch        *b_HLT_DiJetAve220;   //!
   TBranch        *b_HLT_TripleJet85;   //!
   TBranch        *b_HLT_QuadJet30;   //!
   TBranch        *b_HLT_QuadJet60;   //!
   TBranch        *b_HLT_SumET120;   //!
   TBranch        *b_HLT_L1MET20;   //!
   TBranch        *b_HLT_MET25;   //!
   TBranch        *b_HLT_MET35;   //!
   TBranch        *b_HLT_MET50;   //!
   TBranch        *b_HLT_MET65;   //!
   TBranch        *b_HLT_MET75;   //!
   TBranch        *b_HLT_MET35_HT350;   //!
   TBranch        *b_HLT_Jet180_MET60;   //!
   TBranch        *b_HLT_Jet60_MET70_Aco;   //!
   TBranch        *b_HLT_Jet100_MET60_Aco;   //!
   TBranch        *b_HLT_DoubleJet125_MET60;   //!
   TBranch        *b_HLT_DoubleFwdJet40_MET60;   //!
   TBranch        *b_HLT_DoubleJet60_MET60_Aco;   //!
   TBranch        *b_HLT_DoubleJet50_MET70_Aco;   //!
   TBranch        *b_HLT_DoubleJet40_MET70_Aco;   //!
   TBranch        *b_HLT_TripleJet60_MET60;   //!
   TBranch        *b_HLT_QuadJet35_MET60;   //!
   TBranch        *b_HLT_IsoEle15_L1I;   //!
   TBranch        *b_HLT_IsoEle18_L1R;   //!
   TBranch        *b_HLT_IsoEle15_LW_L1I;   //!
   TBranch        *b_HLT_LooseIsoEle15_LW_L1R;   //!
   TBranch        *b_HLT_Ele10_SW_L1R;   //!
   TBranch        *b_HLT_Ele15_SW_L1R;   //!
   TBranch        *b_HLT_Ele15_LW_L1R;   //!
   TBranch        *b_HLT_EM80;   //!
   TBranch        *b_HLT_EM200;   //!
   TBranch        *b_HLT_DoubleIsoEle10_L1I;   //!
   TBranch        *b_HLT_DoubleIsoEle12_L1R;   //!
   TBranch        *b_HLT_DoubleIsoEle10_LW_L1I;   //!
   TBranch        *b_HLT_DoubleIsoEle12_LW_L1R;   //!
   TBranch        *b_HLT_DoubleEle5_SW_L1R;   //!
   TBranch        *b_HLT_DoubleEle10_LW_OnlyPixelM_L1R;   //!
   TBranch        *b_HLT_DoubleEle10_Z;   //!
   TBranch        *b_HLT_DoubleEle6_Exclusive;   //!
   TBranch        *b_HLT_IsoPhoton30_L1I;   //!
   TBranch        *b_HLT_IsoPhoton10_L1R;   //!
   TBranch        *b_HLT_IsoPhoton15_L1R;   //!
   TBranch        *b_HLT_IsoPhoton20_L1R;   //!
   TBranch        *b_HLT_IsoPhoton25_L1R;   //!
   TBranch        *b_HLT_IsoPhoton40_L1R;   //!
   TBranch        *b_HLT_Photon15_L1R;   //!
   TBranch        *b_HLT_Photon25_L1R;   //!
   TBranch        *b_HLT_DoubleIsoPhoton20_L1I;   //!
   TBranch        *b_HLT_DoubleIsoPhoton20_L1R;   //!
   TBranch        *b_HLT_DoublePhoton10_Exclusive;   //!
   TBranch        *b_HLT_L1Mu;   //!
   TBranch        *b_HLT_L1MuOpen;   //!
   TBranch        *b_HLT_L2Mu9;   //!
   TBranch        *b_HLT_IsoMu9;   //!
   TBranch        *b_HLT_IsoMu11;   //!
   TBranch        *b_HLT_IsoMu13;   //!
   TBranch        *b_HLT_IsoMu15;   //!
   TBranch        *b_HLT_Mu3;   //!
   TBranch        *b_HLT_Mu5;   //!
   TBranch        *b_HLT_Mu7;   //!
   TBranch        *b_HLT_Mu9;   //!
   TBranch        *b_HLT_Mu11;   //!
   TBranch        *b_HLT_Mu13;   //!
   TBranch        *b_HLT_Mu15;   //!
   TBranch        *b_HLT_Mu15_L1Mu7;   //!
   TBranch        *b_HLT_Mu15_Vtx2cm;   //!
   TBranch        *b_HLT_Mu15_Vtx2mm;   //!
   TBranch        *b_HLT_DoubleIsoMu3;   //!
   TBranch        *b_HLT_DoubleMu3;   //!
   TBranch        *b_HLT_DoubleMu3_Vtx2cm;   //!
   TBranch        *b_HLT_DoubleMu3_Vtx2mm;   //!
   TBranch        *b_HLT_DoubleMu3_JPsi;   //!
   TBranch        *b_HLT_DoubleMu3_Upsilon;   //!
   TBranch        *b_HLT_DoubleMu7_Z;   //!
   TBranch        *b_HLT_DoubleMu3_SameSign;   //!
   TBranch        *b_HLT_DoubleMu3_Psi2S;   //!
   TBranch        *b_HLT_BTagIP_Jet180;   //!
   TBranch        *b_HLT_BTagIP_Jet120_Relaxed;   //!
   TBranch        *b_HLT_BTagIP_DoubleJet120;   //!
   TBranch        *b_HLT_BTagIP_DoubleJet60_Relaxed;   //!
   TBranch        *b_HLT_BTagIP_TripleJet70;   //!
   TBranch        *b_HLT_BTagIP_TripleJet40_Relaxed;   //!
   TBranch        *b_HLT_BTagIP_QuadJet40;   //!
   TBranch        *b_HLT_BTagIP_QuadJet30_Relaxed;   //!
   TBranch        *b_HLT_BTagIP_HT470;   //!
   TBranch        *b_HLT_BTagIP_HT320_Relaxed;   //!
   TBranch        *b_HLT_BTagMu_DoubleJet120;   //!
   TBranch        *b_HLT_BTagMu_DoubleJet60_Relaxed;   //!
   TBranch        *b_HLT_BTagMu_TripleJet70;   //!
   TBranch        *b_HLT_BTagMu_TripleJet40_Relaxed;   //!
   TBranch        *b_HLT_BTagMu_QuadJet40;   //!
   TBranch        *b_HLT_BTagMu_QuadJet30_Relaxed;   //!
   TBranch        *b_HLT_BTagMu_HT370;   //!
   TBranch        *b_HLT_BTagMu_HT250_Relaxed;   //!
   TBranch        *b_HLT_DoubleMu3_BJPsi;   //!
   TBranch        *b_HLT_DoubleMu4_BJPsi;   //!
   TBranch        *b_HLT_TripleMu3_TauTo3Mu;   //!
   TBranch        *b_HLT_IsoTau_MET65_Trk20;   //!
   TBranch        *b_HLT_IsoTau_MET35_Trk15_L1MET;   //!
   TBranch        *b_HLT_LooseIsoTau_MET30;   //!
   TBranch        *b_HLT_LooseIsoTau_MET30_L1MET;   //!
   TBranch        *b_HLT_DoubleIsoTau_Trk3;   //!
   TBranch        *b_HLT_DoubleLooseIsoTau;   //!
   TBranch        *b_HLT_IsoEle8_IsoMu7;   //!
   TBranch        *b_HLT_IsoEle10_Mu10_L1R;   //!
   TBranch        *b_HLT_IsoEle12_IsoTau_Trk3;   //!
   TBranch        *b_HLT_IsoEle10_BTagIP_Jet35;   //!
   TBranch        *b_HLT_IsoEle12_Jet40;   //!
   TBranch        *b_HLT_IsoEle12_DoubleJet80;   //!
   TBranch        *b_HLT_IsoEle5_TripleJet30;   //!
   TBranch        *b_HLT_IsoEle12_TripleJet60;   //!
   TBranch        *b_HLT_IsoEle12_QuadJet35;   //!
   TBranch        *b_HLT_IsoMu14_IsoTau_Trk3;   //!
   TBranch        *b_HLT_IsoMu7_BTagIP_Jet35;   //!
   TBranch        *b_HLT_IsoMu7_BTagMu_Jet20;   //!
   TBranch        *b_HLT_IsoMu7_Jet40;   //!
   TBranch        *b_HLT_NoL2IsoMu8_Jet40;   //!
   TBranch        *b_HLT_Mu14_Jet50;   //!
   TBranch        *b_HLT_Mu5_TripleJet30;   //!
   TBranch        *b_HLT_BTagMu_Jet20_Calib;   //!
   TBranch        *b_HLT_ZeroBias;   //!
   TBranch        *b_HLT_MinBias;   //!
   TBranch        *b_HLT_MinBiasHcal;   //!
   TBranch        *b_HLT_MinBiasEcal;   //!
   TBranch        *b_HLT_MinBiasPixel;   //!
   TBranch        *b_HLT_MinBiasPixel_Trk5;   //!
   TBranch        *b_HLT_BackwardBSC;   //!
   TBranch        *b_HLT_ForwardBSC;   //!
   TBranch        *b_HLT_CSCBeamHalo;   //!
   TBranch        *b_HLT_CSCBeamHaloOverlapRing1;   //!
   TBranch        *b_HLT_CSCBeamHaloOverlapRing2;   //!
   TBranch        *b_HLT_CSCBeamHaloRing2or3;   //!
   TBranch        *b_HLT_TrackerCosmics;   //!
   TBranch        *b_AlCa_IsoTrack;   //!
   TBranch        *b_AlCa_EcalPhiSym;   //!
   TBranch        *b_AlCa_EcalPi0;   //!
   TBranch        *b_HLTriggerFinalPath;   //!

   Conditions(TTree *tree=0);
   virtual ~Conditions();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef Conditions_cxx
Conditions::Conditions(TTree *tree)
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("default.root");
      if (!f) {
         f = new TFile("default.root");
      }
      tree = (TTree*)gDirectory->Get("Conditions");

   }
   Init(tree);
}

Conditions::~Conditions()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t Conditions::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t Conditions::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (!fChain->InheritsFrom(TChain::Class()))  return centry;
   TChain *chain = (TChain*)fChain;
   if (chain->GetTreeNumber() != fCurrent) {
      fCurrent = chain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void Conditions::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("generation_step", &generation_step, &b_generation_step);
   fChain->SetBranchAddress("simulation_step", &simulation_step, &b_simulation_step);
   fChain->SetBranchAddress("digitisation_step", &digitisation_step, &b_digitisation_step);
   fChain->SetBranchAddress("L1simulation_step", &L1simulation_step, &b_L1simulation_step);
   fChain->SetBranchAddress("validation_step", &validation_step, &b_validation_step);
   fChain->SetBranchAddress("digi2raw_step", &digi2raw_step, &b_digi2raw_step);
   fChain->SetBranchAddress("HLTriggerFirstPath", &HLTriggerFirstPath, &b_HLTriggerFirstPath);
   fChain->SetBranchAddress("HLT_L1Jet15", &HLT_L1Jet15, &b_HLT_L1Jet15);
   fChain->SetBranchAddress("HLT_Jet30", &HLT_Jet30, &b_HLT_Jet30);
   fChain->SetBranchAddress("HLT_Jet50", &HLT_Jet50, &b_HLT_Jet50);
   fChain->SetBranchAddress("HLT_Jet80", &HLT_Jet80, &b_HLT_Jet80);
   fChain->SetBranchAddress("HLT_Jet110", &HLT_Jet110, &b_HLT_Jet110);
   fChain->SetBranchAddress("HLT_Jet180", &HLT_Jet180, &b_HLT_Jet180);
   fChain->SetBranchAddress("HLT_Jet250", &HLT_Jet250, &b_HLT_Jet250);
   fChain->SetBranchAddress("HLT_FwdJet20", &HLT_FwdJet20, &b_HLT_FwdJet20);
   fChain->SetBranchAddress("HLT_DoubleJet150", &HLT_DoubleJet150, &b_HLT_DoubleJet150);
   fChain->SetBranchAddress("HLT_DoubleJet125_Aco", &HLT_DoubleJet125_Aco, &b_HLT_DoubleJet125_Aco);
   fChain->SetBranchAddress("HLT_DoubleFwdJet50", &HLT_DoubleFwdJet50, &b_HLT_DoubleFwdJet50);
   fChain->SetBranchAddress("HLT_DiJetAve15", &HLT_DiJetAve15, &b_HLT_DiJetAve15);
   fChain->SetBranchAddress("HLT_DiJetAve30", &HLT_DiJetAve30, &b_HLT_DiJetAve30);
   fChain->SetBranchAddress("HLT_DiJetAve50", &HLT_DiJetAve50, &b_HLT_DiJetAve50);
   fChain->SetBranchAddress("HLT_DiJetAve70", &HLT_DiJetAve70, &b_HLT_DiJetAve70);
   fChain->SetBranchAddress("HLT_DiJetAve130", &HLT_DiJetAve130, &b_HLT_DiJetAve130);
   fChain->SetBranchAddress("HLT_DiJetAve220", &HLT_DiJetAve220, &b_HLT_DiJetAve220);
   fChain->SetBranchAddress("HLT_TripleJet85", &HLT_TripleJet85, &b_HLT_TripleJet85);
   fChain->SetBranchAddress("HLT_QuadJet30", &HLT_QuadJet30, &b_HLT_QuadJet30);
   fChain->SetBranchAddress("HLT_QuadJet60", &HLT_QuadJet60, &b_HLT_QuadJet60);
   fChain->SetBranchAddress("HLT_SumET120", &HLT_SumET120, &b_HLT_SumET120);
   fChain->SetBranchAddress("HLT_L1MET20", &HLT_L1MET20, &b_HLT_L1MET20);
   fChain->SetBranchAddress("HLT_MET25", &HLT_MET25, &b_HLT_MET25);
   fChain->SetBranchAddress("HLT_MET35", &HLT_MET35, &b_HLT_MET35);
   fChain->SetBranchAddress("HLT_MET50", &HLT_MET50, &b_HLT_MET50);
   fChain->SetBranchAddress("HLT_MET65", &HLT_MET65, &b_HLT_MET65);
   fChain->SetBranchAddress("HLT_MET75", &HLT_MET75, &b_HLT_MET75);
   fChain->SetBranchAddress("HLT_MET35_HT350", &HLT_MET35_HT350, &b_HLT_MET35_HT350);
   fChain->SetBranchAddress("HLT_Jet180_MET60", &HLT_Jet180_MET60, &b_HLT_Jet180_MET60);
   fChain->SetBranchAddress("HLT_Jet60_MET70_Aco", &HLT_Jet60_MET70_Aco, &b_HLT_Jet60_MET70_Aco);
   fChain->SetBranchAddress("HLT_Jet100_MET60_Aco", &HLT_Jet100_MET60_Aco, &b_HLT_Jet100_MET60_Aco);
   fChain->SetBranchAddress("HLT_DoubleJet125_MET60", &HLT_DoubleJet125_MET60, &b_HLT_DoubleJet125_MET60);
   fChain->SetBranchAddress("HLT_DoubleFwdJet40_MET60", &HLT_DoubleFwdJet40_MET60, &b_HLT_DoubleFwdJet40_MET60);
   fChain->SetBranchAddress("HLT_DoubleJet60_MET60_Aco", &HLT_DoubleJet60_MET60_Aco, &b_HLT_DoubleJet60_MET60_Aco);
   fChain->SetBranchAddress("HLT_DoubleJet50_MET70_Aco", &HLT_DoubleJet50_MET70_Aco, &b_HLT_DoubleJet50_MET70_Aco);
   fChain->SetBranchAddress("HLT_DoubleJet40_MET70_Aco", &HLT_DoubleJet40_MET70_Aco, &b_HLT_DoubleJet40_MET70_Aco);
   fChain->SetBranchAddress("HLT_TripleJet60_MET60", &HLT_TripleJet60_MET60, &b_HLT_TripleJet60_MET60);
   fChain->SetBranchAddress("HLT_QuadJet35_MET60", &HLT_QuadJet35_MET60, &b_HLT_QuadJet35_MET60);
   fChain->SetBranchAddress("HLT_IsoEle15_L1I", &HLT_IsoEle15_L1I, &b_HLT_IsoEle15_L1I);
   fChain->SetBranchAddress("HLT_IsoEle18_L1R", &HLT_IsoEle18_L1R, &b_HLT_IsoEle18_L1R);
   fChain->SetBranchAddress("HLT_IsoEle15_LW_L1I", &HLT_IsoEle15_LW_L1I, &b_HLT_IsoEle15_LW_L1I);
   fChain->SetBranchAddress("HLT_LooseIsoEle15_LW_L1R", &HLT_LooseIsoEle15_LW_L1R, &b_HLT_LooseIsoEle15_LW_L1R);
   fChain->SetBranchAddress("HLT_Ele10_SW_L1R", &HLT_Ele10_SW_L1R, &b_HLT_Ele10_SW_L1R);
   fChain->SetBranchAddress("HLT_Ele15_SW_L1R", &HLT_Ele15_SW_L1R, &b_HLT_Ele15_SW_L1R);
   fChain->SetBranchAddress("HLT_Ele15_LW_L1R", &HLT_Ele15_LW_L1R, &b_HLT_Ele15_LW_L1R);
   fChain->SetBranchAddress("HLT_EM80", &HLT_EM80, &b_HLT_EM80);
   fChain->SetBranchAddress("HLT_EM200", &HLT_EM200, &b_HLT_EM200);
   fChain->SetBranchAddress("HLT_DoubleIsoEle10_L1I", &HLT_DoubleIsoEle10_L1I, &b_HLT_DoubleIsoEle10_L1I);
   fChain->SetBranchAddress("HLT_DoubleIsoEle12_L1R", &HLT_DoubleIsoEle12_L1R, &b_HLT_DoubleIsoEle12_L1R);
   fChain->SetBranchAddress("HLT_DoubleIsoEle10_LW_L1I", &HLT_DoubleIsoEle10_LW_L1I, &b_HLT_DoubleIsoEle10_LW_L1I);
   fChain->SetBranchAddress("HLT_DoubleIsoEle12_LW_L1R", &HLT_DoubleIsoEle12_LW_L1R, &b_HLT_DoubleIsoEle12_LW_L1R);
   fChain->SetBranchAddress("HLT_DoubleEle5_SW_L1R", &HLT_DoubleEle5_SW_L1R, &b_HLT_DoubleEle5_SW_L1R);
   fChain->SetBranchAddress("HLT_DoubleEle10_LW_OnlyPixelM_L1R", &HLT_DoubleEle10_LW_OnlyPixelM_L1R, &b_HLT_DoubleEle10_LW_OnlyPixelM_L1R);
   fChain->SetBranchAddress("HLT_DoubleEle10_Z", &HLT_DoubleEle10_Z, &b_HLT_DoubleEle10_Z);
   fChain->SetBranchAddress("HLT_DoubleEle6_Exclusive", &HLT_DoubleEle6_Exclusive, &b_HLT_DoubleEle6_Exclusive);
   fChain->SetBranchAddress("HLT_IsoPhoton30_L1I", &HLT_IsoPhoton30_L1I, &b_HLT_IsoPhoton30_L1I);
   fChain->SetBranchAddress("HLT_IsoPhoton10_L1R", &HLT_IsoPhoton10_L1R, &b_HLT_IsoPhoton10_L1R);
   fChain->SetBranchAddress("HLT_IsoPhoton15_L1R", &HLT_IsoPhoton15_L1R, &b_HLT_IsoPhoton15_L1R);
   fChain->SetBranchAddress("HLT_IsoPhoton20_L1R", &HLT_IsoPhoton20_L1R, &b_HLT_IsoPhoton20_L1R);
   fChain->SetBranchAddress("HLT_IsoPhoton25_L1R", &HLT_IsoPhoton25_L1R, &b_HLT_IsoPhoton25_L1R);
   fChain->SetBranchAddress("HLT_IsoPhoton40_L1R", &HLT_IsoPhoton40_L1R, &b_HLT_IsoPhoton40_L1R);
   fChain->SetBranchAddress("HLT_Photon15_L1R", &HLT_Photon15_L1R, &b_HLT_Photon15_L1R);
   fChain->SetBranchAddress("HLT_Photon25_L1R", &HLT_Photon25_L1R, &b_HLT_Photon25_L1R);
   fChain->SetBranchAddress("HLT_DoubleIsoPhoton20_L1I", &HLT_DoubleIsoPhoton20_L1I, &b_HLT_DoubleIsoPhoton20_L1I);
   fChain->SetBranchAddress("HLT_DoubleIsoPhoton20_L1R", &HLT_DoubleIsoPhoton20_L1R, &b_HLT_DoubleIsoPhoton20_L1R);
   fChain->SetBranchAddress("HLT_DoublePhoton10_Exclusive", &HLT_DoublePhoton10_Exclusive, &b_HLT_DoublePhoton10_Exclusive);
   fChain->SetBranchAddress("HLT_L1Mu", &HLT_L1Mu, &b_HLT_L1Mu);
   fChain->SetBranchAddress("HLT_L1MuOpen", &HLT_L1MuOpen, &b_HLT_L1MuOpen);
   fChain->SetBranchAddress("HLT_L2Mu9", &HLT_L2Mu9, &b_HLT_L2Mu9);
   fChain->SetBranchAddress("HLT_IsoMu9", &HLT_IsoMu9, &b_HLT_IsoMu9);
   fChain->SetBranchAddress("HLT_IsoMu11", &HLT_IsoMu11, &b_HLT_IsoMu11);
   fChain->SetBranchAddress("HLT_IsoMu13", &HLT_IsoMu13, &b_HLT_IsoMu13);
   fChain->SetBranchAddress("HLT_IsoMu15", &HLT_IsoMu15, &b_HLT_IsoMu15);
   fChain->SetBranchAddress("HLT_Mu3", &HLT_Mu3, &b_HLT_Mu3);
   fChain->SetBranchAddress("HLT_Mu5", &HLT_Mu5, &b_HLT_Mu5);
   fChain->SetBranchAddress("HLT_Mu7", &HLT_Mu7, &b_HLT_Mu7);
   fChain->SetBranchAddress("HLT_Mu9", &HLT_Mu9, &b_HLT_Mu9);
   fChain->SetBranchAddress("HLT_Mu11", &HLT_Mu11, &b_HLT_Mu11);
   fChain->SetBranchAddress("HLT_Mu13", &HLT_Mu13, &b_HLT_Mu13);
   fChain->SetBranchAddress("HLT_Mu15", &HLT_Mu15, &b_HLT_Mu15);
   fChain->SetBranchAddress("HLT_Mu15_L1Mu7", &HLT_Mu15_L1Mu7, &b_HLT_Mu15_L1Mu7);
   fChain->SetBranchAddress("HLT_Mu15_Vtx2cm", &HLT_Mu15_Vtx2cm, &b_HLT_Mu15_Vtx2cm);
   fChain->SetBranchAddress("HLT_Mu15_Vtx2mm", &HLT_Mu15_Vtx2mm, &b_HLT_Mu15_Vtx2mm);
   fChain->SetBranchAddress("HLT_DoubleIsoMu3", &HLT_DoubleIsoMu3, &b_HLT_DoubleIsoMu3);
   fChain->SetBranchAddress("HLT_DoubleMu3", &HLT_DoubleMu3, &b_HLT_DoubleMu3);
   fChain->SetBranchAddress("HLT_DoubleMu3_Vtx2cm", &HLT_DoubleMu3_Vtx2cm, &b_HLT_DoubleMu3_Vtx2cm);
   fChain->SetBranchAddress("HLT_DoubleMu3_Vtx2mm", &HLT_DoubleMu3_Vtx2mm, &b_HLT_DoubleMu3_Vtx2mm);
   fChain->SetBranchAddress("HLT_DoubleMu3_JPsi", &HLT_DoubleMu3_JPsi, &b_HLT_DoubleMu3_JPsi);
   fChain->SetBranchAddress("HLT_DoubleMu3_Upsilon", &HLT_DoubleMu3_Upsilon, &b_HLT_DoubleMu3_Upsilon);
   fChain->SetBranchAddress("HLT_DoubleMu7_Z", &HLT_DoubleMu7_Z, &b_HLT_DoubleMu7_Z);
   fChain->SetBranchAddress("HLT_DoubleMu3_SameSign", &HLT_DoubleMu3_SameSign, &b_HLT_DoubleMu3_SameSign);
   fChain->SetBranchAddress("HLT_DoubleMu3_Psi2S", &HLT_DoubleMu3_Psi2S, &b_HLT_DoubleMu3_Psi2S);
   fChain->SetBranchAddress("HLT_BTagIP_Jet180", &HLT_BTagIP_Jet180, &b_HLT_BTagIP_Jet180);
   fChain->SetBranchAddress("HLT_BTagIP_Jet120_Relaxed", &HLT_BTagIP_Jet120_Relaxed, &b_HLT_BTagIP_Jet120_Relaxed);
   fChain->SetBranchAddress("HLT_BTagIP_DoubleJet120", &HLT_BTagIP_DoubleJet120, &b_HLT_BTagIP_DoubleJet120);
   fChain->SetBranchAddress("HLT_BTagIP_DoubleJet60_Relaxed", &HLT_BTagIP_DoubleJet60_Relaxed, &b_HLT_BTagIP_DoubleJet60_Relaxed);
   fChain->SetBranchAddress("HLT_BTagIP_TripleJet70", &HLT_BTagIP_TripleJet70, &b_HLT_BTagIP_TripleJet70);
   fChain->SetBranchAddress("HLT_BTagIP_TripleJet40_Relaxed", &HLT_BTagIP_TripleJet40_Relaxed, &b_HLT_BTagIP_TripleJet40_Relaxed);
   fChain->SetBranchAddress("HLT_BTagIP_QuadJet40", &HLT_BTagIP_QuadJet40, &b_HLT_BTagIP_QuadJet40);
   fChain->SetBranchAddress("HLT_BTagIP_QuadJet30_Relaxed", &HLT_BTagIP_QuadJet30_Relaxed, &b_HLT_BTagIP_QuadJet30_Relaxed);
   fChain->SetBranchAddress("HLT_BTagIP_HT470", &HLT_BTagIP_HT470, &b_HLT_BTagIP_HT470);
   fChain->SetBranchAddress("HLT_BTagIP_HT320_Relaxed", &HLT_BTagIP_HT320_Relaxed, &b_HLT_BTagIP_HT320_Relaxed);
   fChain->SetBranchAddress("HLT_BTagMu_DoubleJet120", &HLT_BTagMu_DoubleJet120, &b_HLT_BTagMu_DoubleJet120);
   fChain->SetBranchAddress("HLT_BTagMu_DoubleJet60_Relaxed", &HLT_BTagMu_DoubleJet60_Relaxed, &b_HLT_BTagMu_DoubleJet60_Relaxed);
   fChain->SetBranchAddress("HLT_BTagMu_TripleJet70", &HLT_BTagMu_TripleJet70, &b_HLT_BTagMu_TripleJet70);
   fChain->SetBranchAddress("HLT_BTagMu_TripleJet40_Relaxed", &HLT_BTagMu_TripleJet40_Relaxed, &b_HLT_BTagMu_TripleJet40_Relaxed);
   fChain->SetBranchAddress("HLT_BTagMu_QuadJet40", &HLT_BTagMu_QuadJet40, &b_HLT_BTagMu_QuadJet40);
   fChain->SetBranchAddress("HLT_BTagMu_QuadJet30_Relaxed", &HLT_BTagMu_QuadJet30_Relaxed, &b_HLT_BTagMu_QuadJet30_Relaxed);
   fChain->SetBranchAddress("HLT_BTagMu_HT370", &HLT_BTagMu_HT370, &b_HLT_BTagMu_HT370);
   fChain->SetBranchAddress("HLT_BTagMu_HT250_Relaxed", &HLT_BTagMu_HT250_Relaxed, &b_HLT_BTagMu_HT250_Relaxed);
   fChain->SetBranchAddress("HLT_DoubleMu3_BJPsi", &HLT_DoubleMu3_BJPsi, &b_HLT_DoubleMu3_BJPsi);
   fChain->SetBranchAddress("HLT_DoubleMu4_BJPsi", &HLT_DoubleMu4_BJPsi, &b_HLT_DoubleMu4_BJPsi);
   fChain->SetBranchAddress("HLT_TripleMu3_TauTo3Mu", &HLT_TripleMu3_TauTo3Mu, &b_HLT_TripleMu3_TauTo3Mu);
   fChain->SetBranchAddress("HLT_IsoTau_MET65_Trk20", &HLT_IsoTau_MET65_Trk20, &b_HLT_IsoTau_MET65_Trk20);
   fChain->SetBranchAddress("HLT_IsoTau_MET35_Trk15_L1MET", &HLT_IsoTau_MET35_Trk15_L1MET, &b_HLT_IsoTau_MET35_Trk15_L1MET);
   fChain->SetBranchAddress("HLT_LooseIsoTau_MET30", &HLT_LooseIsoTau_MET30, &b_HLT_LooseIsoTau_MET30);
   fChain->SetBranchAddress("HLT_LooseIsoTau_MET30_L1MET", &HLT_LooseIsoTau_MET30_L1MET, &b_HLT_LooseIsoTau_MET30_L1MET);
   fChain->SetBranchAddress("HLT_DoubleIsoTau_Trk3", &HLT_DoubleIsoTau_Trk3, &b_HLT_DoubleIsoTau_Trk3);
   fChain->SetBranchAddress("HLT_DoubleLooseIsoTau", &HLT_DoubleLooseIsoTau, &b_HLT_DoubleLooseIsoTau);
   fChain->SetBranchAddress("HLT_IsoEle8_IsoMu7", &HLT_IsoEle8_IsoMu7, &b_HLT_IsoEle8_IsoMu7);
   fChain->SetBranchAddress("HLT_IsoEle10_Mu10_L1R", &HLT_IsoEle10_Mu10_L1R, &b_HLT_IsoEle10_Mu10_L1R);
   fChain->SetBranchAddress("HLT_IsoEle12_IsoTau_Trk3", &HLT_IsoEle12_IsoTau_Trk3, &b_HLT_IsoEle12_IsoTau_Trk3);
   fChain->SetBranchAddress("HLT_IsoEle10_BTagIP_Jet35", &HLT_IsoEle10_BTagIP_Jet35, &b_HLT_IsoEle10_BTagIP_Jet35);
   fChain->SetBranchAddress("HLT_IsoEle12_Jet40", &HLT_IsoEle12_Jet40, &b_HLT_IsoEle12_Jet40);
   fChain->SetBranchAddress("HLT_IsoEle12_DoubleJet80", &HLT_IsoEle12_DoubleJet80, &b_HLT_IsoEle12_DoubleJet80);
   fChain->SetBranchAddress("HLT_IsoEle5_TripleJet30", &HLT_IsoEle5_TripleJet30, &b_HLT_IsoEle5_TripleJet30);
   fChain->SetBranchAddress("HLT_IsoEle12_TripleJet60", &HLT_IsoEle12_TripleJet60, &b_HLT_IsoEle12_TripleJet60);
   fChain->SetBranchAddress("HLT_IsoEle12_QuadJet35", &HLT_IsoEle12_QuadJet35, &b_HLT_IsoEle12_QuadJet35);
   fChain->SetBranchAddress("HLT_IsoMu14_IsoTau_Trk3", &HLT_IsoMu14_IsoTau_Trk3, &b_HLT_IsoMu14_IsoTau_Trk3);
   fChain->SetBranchAddress("HLT_IsoMu7_BTagIP_Jet35", &HLT_IsoMu7_BTagIP_Jet35, &b_HLT_IsoMu7_BTagIP_Jet35);
   fChain->SetBranchAddress("HLT_IsoMu7_BTagMu_Jet20", &HLT_IsoMu7_BTagMu_Jet20, &b_HLT_IsoMu7_BTagMu_Jet20);
   fChain->SetBranchAddress("HLT_IsoMu7_Jet40", &HLT_IsoMu7_Jet40, &b_HLT_IsoMu7_Jet40);
   fChain->SetBranchAddress("HLT_NoL2IsoMu8_Jet40", &HLT_NoL2IsoMu8_Jet40, &b_HLT_NoL2IsoMu8_Jet40);
   fChain->SetBranchAddress("HLT_Mu14_Jet50", &HLT_Mu14_Jet50, &b_HLT_Mu14_Jet50);
   fChain->SetBranchAddress("HLT_Mu5_TripleJet30", &HLT_Mu5_TripleJet30, &b_HLT_Mu5_TripleJet30);
   fChain->SetBranchAddress("HLT_BTagMu_Jet20_Calib", &HLT_BTagMu_Jet20_Calib, &b_HLT_BTagMu_Jet20_Calib);
   fChain->SetBranchAddress("HLT_ZeroBias", &HLT_ZeroBias, &b_HLT_ZeroBias);
   fChain->SetBranchAddress("HLT_MinBias", &HLT_MinBias, &b_HLT_MinBias);
   fChain->SetBranchAddress("HLT_MinBiasHcal", &HLT_MinBiasHcal, &b_HLT_MinBiasHcal);
   fChain->SetBranchAddress("HLT_MinBiasEcal", &HLT_MinBiasEcal, &b_HLT_MinBiasEcal);
   fChain->SetBranchAddress("HLT_MinBiasPixel", &HLT_MinBiasPixel, &b_HLT_MinBiasPixel);
   fChain->SetBranchAddress("HLT_MinBiasPixel_Trk5", &HLT_MinBiasPixel_Trk5, &b_HLT_MinBiasPixel_Trk5);
   fChain->SetBranchAddress("HLT_BackwardBSC", &HLT_BackwardBSC, &b_HLT_BackwardBSC);
   fChain->SetBranchAddress("HLT_ForwardBSC", &HLT_ForwardBSC, &b_HLT_ForwardBSC);
   fChain->SetBranchAddress("HLT_CSCBeamHalo", &HLT_CSCBeamHalo, &b_HLT_CSCBeamHalo);
   fChain->SetBranchAddress("HLT_CSCBeamHaloOverlapRing1", &HLT_CSCBeamHaloOverlapRing1, &b_HLT_CSCBeamHaloOverlapRing1);
   fChain->SetBranchAddress("HLT_CSCBeamHaloOverlapRing2", &HLT_CSCBeamHaloOverlapRing2, &b_HLT_CSCBeamHaloOverlapRing2);
   fChain->SetBranchAddress("HLT_CSCBeamHaloRing2or3", &HLT_CSCBeamHaloRing2or3, &b_HLT_CSCBeamHaloRing2or3);
   fChain->SetBranchAddress("HLT_TrackerCosmics", &HLT_TrackerCosmics, &b_HLT_TrackerCosmics);
   fChain->SetBranchAddress("AlCa_IsoTrack", &AlCa_IsoTrack, &b_AlCa_IsoTrack);
   fChain->SetBranchAddress("AlCa_EcalPhiSym", &AlCa_EcalPhiSym, &b_AlCa_EcalPhiSym);
   fChain->SetBranchAddress("AlCa_EcalPi0", &AlCa_EcalPi0, &b_AlCa_EcalPi0);
   fChain->SetBranchAddress("HLTriggerFinalPath", &HLTriggerFinalPath, &b_HLTriggerFinalPath);
   Notify();
}

Bool_t Conditions::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void Conditions::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t Conditions::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef Conditions_cxx
