#ifndef Conditions_h
#define Conditions_h

#include <vector>
#include <string>

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

class Conditions {
public :
  TTree          *fChain;   //!pointer to the analyzed TTree or TChain
  Int_t           fCurrent; //!current Tree number in a TChain
  
  // Declaration of leaf types
  Int_t           nHLT;
  std::vector<int> *indexHLT;
  std::vector<std::string> *nameHLT;
  
  // List of branches
  TBranch *b_nHLT;
  TBranch *b_indexHLT;
  TBranch *b_nameHLT;  

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

   fChain->SetBranchAddress("nHLT", &nHLT, &b_nHLT);
   fChain->SetBranchAddress("indexHLT", &indexHLT, &b_indexHLT);
   fChain->SetBranchAddress("nameHLT", &nameHLT, &b_nameHLT);

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
