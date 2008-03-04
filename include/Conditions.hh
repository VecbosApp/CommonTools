//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Mar  3 16:48:28 2008 by ROOT version 5.14/00f
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

   // Declaration of leave types
   Int_t           HLT1jet;
   Int_t           HLT2jet;
   Int_t           HLT3jet;
   Int_t           HLT4jet;
   Int_t           HLT1MET;
   Int_t           HLT2jetAco;
   Int_t           HLT1jet1METAco;
   Int_t           HLT1jet1MET;
   Int_t           HLT2jet1MET;
   Int_t           HLT3jet1MET;
   Int_t           HLT4jet1MET;
   Int_t           HLT1MET1HT;
   Int_t           CandHLT1SumET;
   Int_t           HLT1jetPE1;
   Int_t           HLT1jetPE3;
   Int_t           HLT1jetPE5;
   Int_t           CandHLT1jetPE7;
   Int_t           CandHLT1METPre1;
   Int_t           CandHLT1METPre2;
   Int_t           CandHLT1METPre3;
   Int_t           CandHLT2jetAve30;
   Int_t           CandHLT2jetAve60;
   Int_t           CandHLT2jetAve110;
   Int_t           CandHLT2jetAve150;
   Int_t           CandHLT2jetAve200;
   Int_t           HLT2jetvbfMET;
   Int_t           HLTS2jet1METNV;
   Int_t           HLTS2jet1METAco;
   Int_t           CandHLTSjet1MET1Aco;
   Int_t           CandHLTSjet2MET1Aco;
   Int_t           CandHLTS2jetAco;
   Int_t           CandHLTJetMETRapidityGap;
   Int_t           HLT1Electron;
   Int_t           HLT1ElectronRelaxed;
   Int_t           HLT2Electron;
   Int_t           HLT2ElectronRelaxed;
   Int_t           HLT1Photon;
   Int_t           HLT1PhotonRelaxed;
   Int_t           HLT2Photon;
   Int_t           HLT2PhotonRelaxed;
   Int_t           HLT1EMHighEt;
   Int_t           HLT1EMVeryHighEt;
   Int_t           CandHLT2ElectronZCounter;
   Int_t           CandHLT2ElectronExclusive;
   Int_t           CandHLT2PhotonExclusive;
   Int_t           CandHLT1PhotonL1Isolated;
   Int_t           HLT1MuonIso;
   Int_t           HLT1MuonNonIso;
   Int_t           CandHLT2MuonIso;
   Int_t           HLT2MuonNonIso;
   Int_t           HLT2MuonJPsi;
   Int_t           HLT2MuonUpsilon;
   Int_t           HLT2MuonZ;
   Int_t           HLTNMuonNonIso;
   Int_t           HLT2MuonSameSign;
   Int_t           CandHLT1MuonPrescalePt3;
   Int_t           CandHLT1MuonPrescalePt5;
   Int_t           CandHLT1MuonPrescalePt7x7;
   Int_t           CandHLT1MuonPrescalePt7x10;
   Int_t           CandHLT1MuonLevel1;
   Int_t           HLTB1Jet;
   Int_t           HLTB2Jet;
   Int_t           HLTB3Jet;
   Int_t           HLTB4Jet;
   Int_t           HLTBHT;
   Int_t           HLTB1JetMu;
   Int_t           HLTB2JetMu;
   Int_t           HLTB3JetMu;
   Int_t           HLTB4JetMu;
   Int_t           HLTBHTMu;
   Int_t           HLTBJPsiMuMu;
   Int_t           HLT1Tau;
   Int_t           HLT1Tau1MET;
   Int_t           HLT2TauPixel;
   Int_t           HLTXElectronBJet;
   Int_t           HLTXMuonBJet;
   Int_t           HLTXMuonBJetSoftMuon;
   Int_t           HLTXElectron1Jet;
   Int_t           HLTXElectron2Jet;
   Int_t           HLTXElectron3Jet;
   Int_t           HLTXElectron4Jet;
   Int_t           HLTXMuonJets;
   Int_t           HLTXElectronMuon;
   Int_t           HLTXElectronMuonRelaxed;
   Int_t           HLTXElectronTau;
   Int_t           HLTXMuonTau;
   Int_t           CandHLTHcalIsolatedTrack;
   Int_t           HLTMinBiasPixel;
   Int_t           HLTMinBias;
   Int_t           HLTZeroBias;

   // List of branches
   TBranch        *b_HLT1jet;   //!
   TBranch        *b_HLT2jet;   //!
   TBranch        *b_HLT3jet;   //!
   TBranch        *b_HLT4jet;   //!
   TBranch        *b_HLT1MET;   //!
   TBranch        *b_HLT2jetAco;   //!
   TBranch        *b_HLT1jet1METAco;   //!
   TBranch        *b_HLT1jet1MET;   //!
   TBranch        *b_HLT2jet1MET;   //!
   TBranch        *b_HLT3jet1MET;   //!
   TBranch        *b_HLT4jet1MET;   //!
   TBranch        *b_HLT1MET1HT;   //!
   TBranch        *b_CandHLT1SumET;   //!
   TBranch        *b_HLT1jetPE1;   //!
   TBranch        *b_HLT1jetPE3;   //!
   TBranch        *b_HLT1jetPE5;   //!
   TBranch        *b_CandHLT1jetPE7;   //!
   TBranch        *b_CandHLT1METPre1;   //!
   TBranch        *b_CandHLT1METPre2;   //!
   TBranch        *b_CandHLT1METPre3;   //!
   TBranch        *b_CandHLT2jetAve30;   //!
   TBranch        *b_CandHLT2jetAve60;   //!
   TBranch        *b_CandHLT2jetAve110;   //!
   TBranch        *b_CandHLT2jetAve150;   //!
   TBranch        *b_CandHLT2jetAve200;   //!
   TBranch        *b_HLT2jetvbfMET;   //!
   TBranch        *b_HLTS2jet1METNV;   //!
   TBranch        *b_HLTS2jet1METAco;   //!
   TBranch        *b_CandHLTSjet1MET1Aco;   //!
   TBranch        *b_CandHLTSjet2MET1Aco;   //!
   TBranch        *b_CandHLTS2jetAco;   //!
   TBranch        *b_CandHLTJetMETRapidityGap;   //!
   TBranch        *b_HLT1Electron;   //!
   TBranch        *b_HLT1ElectronRelaxed;   //!
   TBranch        *b_HLT2Electron;   //!
   TBranch        *b_HLT2ElectronRelaxed;   //!
   TBranch        *b_HLT1Photon;   //!
   TBranch        *b_HLT1PhotonRelaxed;   //!
   TBranch        *b_HLT2Photon;   //!
   TBranch        *b_HLT2PhotonRelaxed;   //!
   TBranch        *b_HLT1EMHighEt;   //!
   TBranch        *b_HLT1EMVeryHighEt;   //!
   TBranch        *b_CandHLT2ElectronZCounter;   //!
   TBranch        *b_CandHLT2ElectronExclusive;   //!
   TBranch        *b_CandHLT2PhotonExclusive;   //!
   TBranch        *b_CandHLT1PhotonL1Isolated;   //!
   TBranch        *b_HLT1MuonIso;   //!
   TBranch        *b_HLT1MuonNonIso;   //!
   TBranch        *b_CandHLT2MuonIso;   //!
   TBranch        *b_HLT2MuonNonIso;   //!
   TBranch        *b_HLT2MuonJPsi;   //!
   TBranch        *b_HLT2MuonUpsilon;   //!
   TBranch        *b_HLT2MuonZ;   //!
   TBranch        *b_HLTNMuonNonIso;   //!
   TBranch        *b_HLT2MuonSameSign;   //!
   TBranch        *b_CandHLT1MuonPrescalePt3;   //!
   TBranch        *b_CandHLT1MuonPrescalePt5;   //!
   TBranch        *b_CandHLT1MuonPrescalePt7x7;   //!
   TBranch        *b_CandHLT1MuonPrescalePt7x10;   //!
   TBranch        *b_CandHLT1MuonLevel1;   //!
   TBranch        *b_HLTB1Jet;   //!
   TBranch        *b_HLTB2Jet;   //!
   TBranch        *b_HLTB3Jet;   //!
   TBranch        *b_HLTB4Jet;   //!
   TBranch        *b_HLTBHT;   //!
   TBranch        *b_HLTB1JetMu;   //!
   TBranch        *b_HLTB2JetMu;   //!
   TBranch        *b_HLTB3JetMu;   //!
   TBranch        *b_HLTB4JetMu;   //!
   TBranch        *b_HLTBHTMu;   //!
   TBranch        *b_HLTBJPsiMuMu;   //!
   TBranch        *b_HLT1Tau;   //!
   TBranch        *b_HLT1Tau1MET;   //!
   TBranch        *b_HLT2TauPixel;   //!
   TBranch        *b_HLTXElectronBJet;   //!
   TBranch        *b_HLTXMuonBJet;   //!
   TBranch        *b_HLTXMuonBJetSoftMuon;   //!
   TBranch        *b_HLTXElectron1Jet;   //!
   TBranch        *b_HLTXElectron2Jet;   //!
   TBranch        *b_HLTXElectron3Jet;   //!
   TBranch        *b_HLTXElectron4Jet;   //!
   TBranch        *b_HLTXMuonJets;   //!
   TBranch        *b_HLTXElectronMuon;   //!
   TBranch        *b_HLTXElectronMuonRelaxed;   //!
   TBranch        *b_HLTXElectronTau;   //!
   TBranch        *b_HLTXMuonTau;   //!
   TBranch        *b_CandHLTHcalIsolatedTrack;   //!
   TBranch        *b_HLTMinBiasPixel;   //!
   TBranch        *b_HLTMinBias;   //!
   TBranch        *b_HLTZeroBias;   //!

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
   // It is normaly not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("HLT1jet", &HLT1jet, &b_HLT1jet);
   fChain->SetBranchAddress("HLT2jet", &HLT2jet, &b_HLT2jet);
   fChain->SetBranchAddress("HLT3jet", &HLT3jet, &b_HLT3jet);
   fChain->SetBranchAddress("HLT4jet", &HLT4jet, &b_HLT4jet);
   fChain->SetBranchAddress("HLT1MET", &HLT1MET, &b_HLT1MET);
   fChain->SetBranchAddress("HLT2jetAco", &HLT2jetAco, &b_HLT2jetAco);
   fChain->SetBranchAddress("HLT1jet1METAco", &HLT1jet1METAco, &b_HLT1jet1METAco);
   fChain->SetBranchAddress("HLT1jet1MET", &HLT1jet1MET, &b_HLT1jet1MET);
   fChain->SetBranchAddress("HLT2jet1MET", &HLT2jet1MET, &b_HLT2jet1MET);
   fChain->SetBranchAddress("HLT3jet1MET", &HLT3jet1MET, &b_HLT3jet1MET);
   fChain->SetBranchAddress("HLT4jet1MET", &HLT4jet1MET, &b_HLT4jet1MET);
   fChain->SetBranchAddress("HLT1MET1HT", &HLT1MET1HT, &b_HLT1MET1HT);
   fChain->SetBranchAddress("CandHLT1SumET", &CandHLT1SumET, &b_CandHLT1SumET);
   fChain->SetBranchAddress("HLT1jetPE1", &HLT1jetPE1, &b_HLT1jetPE1);
   fChain->SetBranchAddress("HLT1jetPE3", &HLT1jetPE3, &b_HLT1jetPE3);
   fChain->SetBranchAddress("HLT1jetPE5", &HLT1jetPE5, &b_HLT1jetPE5);
   fChain->SetBranchAddress("CandHLT1jetPE7", &CandHLT1jetPE7, &b_CandHLT1jetPE7);
   fChain->SetBranchAddress("CandHLT1METPre1", &CandHLT1METPre1, &b_CandHLT1METPre1);
   fChain->SetBranchAddress("CandHLT1METPre2", &CandHLT1METPre2, &b_CandHLT1METPre2);
   fChain->SetBranchAddress("CandHLT1METPre3", &CandHLT1METPre3, &b_CandHLT1METPre3);
   fChain->SetBranchAddress("CandHLT2jetAve30", &CandHLT2jetAve30, &b_CandHLT2jetAve30);
   fChain->SetBranchAddress("CandHLT2jetAve60", &CandHLT2jetAve60, &b_CandHLT2jetAve60);
   fChain->SetBranchAddress("CandHLT2jetAve110", &CandHLT2jetAve110, &b_CandHLT2jetAve110);
   fChain->SetBranchAddress("CandHLT2jetAve150", &CandHLT2jetAve150, &b_CandHLT2jetAve150);
   fChain->SetBranchAddress("CandHLT2jetAve200", &CandHLT2jetAve200, &b_CandHLT2jetAve200);
   fChain->SetBranchAddress("HLT2jetvbfMET", &HLT2jetvbfMET, &b_HLT2jetvbfMET);
   fChain->SetBranchAddress("HLTS2jet1METNV", &HLTS2jet1METNV, &b_HLTS2jet1METNV);
   fChain->SetBranchAddress("HLTS2jet1METAco", &HLTS2jet1METAco, &b_HLTS2jet1METAco);
   fChain->SetBranchAddress("CandHLTSjet1MET1Aco", &CandHLTSjet1MET1Aco, &b_CandHLTSjet1MET1Aco);
   fChain->SetBranchAddress("CandHLTSjet2MET1Aco", &CandHLTSjet2MET1Aco, &b_CandHLTSjet2MET1Aco);
   fChain->SetBranchAddress("CandHLTS2jetAco", &CandHLTS2jetAco, &b_CandHLTS2jetAco);
   fChain->SetBranchAddress("CandHLTJetMETRapidityGap", &CandHLTJetMETRapidityGap, &b_CandHLTJetMETRapidityGap);
   fChain->SetBranchAddress("HLT1Electron", &HLT1Electron, &b_HLT1Electron);
   fChain->SetBranchAddress("HLT1ElectronRelaxed", &HLT1ElectronRelaxed, &b_HLT1ElectronRelaxed);
   fChain->SetBranchAddress("HLT2Electron", &HLT2Electron, &b_HLT2Electron);
   fChain->SetBranchAddress("HLT2ElectronRelaxed", &HLT2ElectronRelaxed, &b_HLT2ElectronRelaxed);
   fChain->SetBranchAddress("HLT1Photon", &HLT1Photon, &b_HLT1Photon);
   fChain->SetBranchAddress("HLT1PhotonRelaxed", &HLT1PhotonRelaxed, &b_HLT1PhotonRelaxed);
   fChain->SetBranchAddress("HLT2Photon", &HLT2Photon, &b_HLT2Photon);
   fChain->SetBranchAddress("HLT2PhotonRelaxed", &HLT2PhotonRelaxed, &b_HLT2PhotonRelaxed);
   fChain->SetBranchAddress("HLT1EMHighEt", &HLT1EMHighEt, &b_HLT1EMHighEt);
   fChain->SetBranchAddress("HLT1EMVeryHighEt", &HLT1EMVeryHighEt, &b_HLT1EMVeryHighEt);
   fChain->SetBranchAddress("CandHLT2ElectronZCounter", &CandHLT2ElectronZCounter, &b_CandHLT2ElectronZCounter);
   fChain->SetBranchAddress("CandHLT2ElectronExclusive", &CandHLT2ElectronExclusive, &b_CandHLT2ElectronExclusive);
   fChain->SetBranchAddress("CandHLT2PhotonExclusive", &CandHLT2PhotonExclusive, &b_CandHLT2PhotonExclusive);
   fChain->SetBranchAddress("CandHLT1PhotonL1Isolated", &CandHLT1PhotonL1Isolated, &b_CandHLT1PhotonL1Isolated);
   fChain->SetBranchAddress("HLT1MuonIso", &HLT1MuonIso, &b_HLT1MuonIso);
   fChain->SetBranchAddress("HLT1MuonNonIso", &HLT1MuonNonIso, &b_HLT1MuonNonIso);
   fChain->SetBranchAddress("CandHLT2MuonIso", &CandHLT2MuonIso, &b_CandHLT2MuonIso);
   fChain->SetBranchAddress("HLT2MuonNonIso", &HLT2MuonNonIso, &b_HLT2MuonNonIso);
   fChain->SetBranchAddress("HLT2MuonJPsi", &HLT2MuonJPsi, &b_HLT2MuonJPsi);
   fChain->SetBranchAddress("HLT2MuonUpsilon", &HLT2MuonUpsilon, &b_HLT2MuonUpsilon);
   fChain->SetBranchAddress("HLT2MuonZ", &HLT2MuonZ, &b_HLT2MuonZ);
   fChain->SetBranchAddress("HLTNMuonNonIso", &HLTNMuonNonIso, &b_HLTNMuonNonIso);
   fChain->SetBranchAddress("HLT2MuonSameSign", &HLT2MuonSameSign, &b_HLT2MuonSameSign);
   fChain->SetBranchAddress("CandHLT1MuonPrescalePt3", &CandHLT1MuonPrescalePt3, &b_CandHLT1MuonPrescalePt3);
   fChain->SetBranchAddress("CandHLT1MuonPrescalePt5", &CandHLT1MuonPrescalePt5, &b_CandHLT1MuonPrescalePt5);
   fChain->SetBranchAddress("CandHLT1MuonPrescalePt7x7", &CandHLT1MuonPrescalePt7x7, &b_CandHLT1MuonPrescalePt7x7);
   fChain->SetBranchAddress("CandHLT1MuonPrescalePt7x10", &CandHLT1MuonPrescalePt7x10, &b_CandHLT1MuonPrescalePt7x10);
   fChain->SetBranchAddress("CandHLT1MuonLevel1", &CandHLT1MuonLevel1, &b_CandHLT1MuonLevel1);
   fChain->SetBranchAddress("HLTB1Jet", &HLTB1Jet, &b_HLTB1Jet);
   fChain->SetBranchAddress("HLTB2Jet", &HLTB2Jet, &b_HLTB2Jet);
   fChain->SetBranchAddress("HLTB3Jet", &HLTB3Jet, &b_HLTB3Jet);
   fChain->SetBranchAddress("HLTB4Jet", &HLTB4Jet, &b_HLTB4Jet);
   fChain->SetBranchAddress("HLTBHT", &HLTBHT, &b_HLTBHT);
   fChain->SetBranchAddress("HLTB1JetMu", &HLTB1JetMu, &b_HLTB1JetMu);
   fChain->SetBranchAddress("HLTB2JetMu", &HLTB2JetMu, &b_HLTB2JetMu);
   fChain->SetBranchAddress("HLTB3JetMu", &HLTB3JetMu, &b_HLTB3JetMu);
   fChain->SetBranchAddress("HLTB4JetMu", &HLTB4JetMu, &b_HLTB4JetMu);
   fChain->SetBranchAddress("HLTBHTMu", &HLTBHTMu, &b_HLTBHTMu);
   fChain->SetBranchAddress("HLTBJPsiMuMu", &HLTBJPsiMuMu, &b_HLTBJPsiMuMu);
   fChain->SetBranchAddress("HLT1Tau", &HLT1Tau, &b_HLT1Tau);
   fChain->SetBranchAddress("HLT1Tau1MET", &HLT1Tau1MET, &b_HLT1Tau1MET);
   fChain->SetBranchAddress("HLT2TauPixel", &HLT2TauPixel, &b_HLT2TauPixel);
   fChain->SetBranchAddress("HLTXElectronBJet", &HLTXElectronBJet, &b_HLTXElectronBJet);
   fChain->SetBranchAddress("HLTXMuonBJet", &HLTXMuonBJet, &b_HLTXMuonBJet);
   fChain->SetBranchAddress("HLTXMuonBJetSoftMuon", &HLTXMuonBJetSoftMuon, &b_HLTXMuonBJetSoftMuon);
   fChain->SetBranchAddress("HLTXElectron1Jet", &HLTXElectron1Jet, &b_HLTXElectron1Jet);
   fChain->SetBranchAddress("HLTXElectron2Jet", &HLTXElectron2Jet, &b_HLTXElectron2Jet);
   fChain->SetBranchAddress("HLTXElectron3Jet", &HLTXElectron3Jet, &b_HLTXElectron3Jet);
   fChain->SetBranchAddress("HLTXElectron4Jet", &HLTXElectron4Jet, &b_HLTXElectron4Jet);
   fChain->SetBranchAddress("HLTXMuonJets", &HLTXMuonJets, &b_HLTXMuonJets);
   fChain->SetBranchAddress("HLTXElectronMuon", &HLTXElectronMuon, &b_HLTXElectronMuon);
   fChain->SetBranchAddress("HLTXElectronMuonRelaxed", &HLTXElectronMuonRelaxed, &b_HLTXElectronMuonRelaxed);
   fChain->SetBranchAddress("HLTXElectronTau", &HLTXElectronTau, &b_HLTXElectronTau);
   fChain->SetBranchAddress("HLTXMuonTau", &HLTXMuonTau, &b_HLTXMuonTau);
   fChain->SetBranchAddress("CandHLTHcalIsolatedTrack", &CandHLTHcalIsolatedTrack, &b_CandHLTHcalIsolatedTrack);
   fChain->SetBranchAddress("HLTMinBiasPixel", &HLTMinBiasPixel, &b_HLTMinBiasPixel);
   fChain->SetBranchAddress("HLTMinBias", &HLTMinBias, &b_HLTMinBias);
   fChain->SetBranchAddress("HLTZeroBias", &HLTZeroBias, &b_HLTZeroBias);
   Notify();
}

Bool_t Conditions::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normaly not necessary to make changes
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
