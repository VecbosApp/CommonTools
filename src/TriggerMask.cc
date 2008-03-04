#include "CommonTools/include/TriggerMask.hh"
#include <iostream>

TriggerMask::TriggerMask(TTree *tree)
  : Conditions(tree) {

  m_tree = tree;

}

void TriggerMask::requireTrigger( const char* triggerString ) {
  
  m_tree->GetEntry(0);
  
  if( strcmp (triggerString,"HLT1jet") == 0 ) m_requiredTriggers.push_back( HLT1jet );
  if( strcmp (triggerString,"HLT2jet") == 0 ) m_requiredTriggers.push_back( HLT2jet );
  if( strcmp (triggerString,"HLT3jet") == 0 ) m_requiredTriggers.push_back( HLT3jet );
  if( strcmp (triggerString,"HLT4jet") == 0 ) m_requiredTriggers.push_back( HLT4jet );
  if( strcmp (triggerString,"HLT1MET") == 0 ) m_requiredTriggers.push_back( HLT1MET );
  if( strcmp (triggerString,"HLT2jetAco") == 0 ) m_requiredTriggers.push_back( HLT2jetAco );
  if( strcmp (triggerString,"HLT1jet1METAco") == 0 ) m_requiredTriggers.push_back( HLT1jet1METAco );
  if( strcmp (triggerString,"HLT1jet1MET") == 0 ) m_requiredTriggers.push_back( HLT1jet1MET );
  if( strcmp (triggerString,"HLT2jet1MET") == 0 ) m_requiredTriggers.push_back( HLT2jet1MET );
  if( strcmp (triggerString,"HLT3jet1MET") == 0 ) m_requiredTriggers.push_back( HLT3jet1MET );
  if( strcmp (triggerString,"HLT4jet1MET") == 0 ) m_requiredTriggers.push_back( HLT4jet1MET );
  if( strcmp (triggerString,"HLT1MET1HT") == 0 ) m_requiredTriggers.push_back( HLT1MET1HT );
  if( strcmp (triggerString,"CandHLT1SumET") == 0 ) m_requiredTriggers.push_back( CandHLT1SumET );
  if( strcmp (triggerString,"HLT1jetPE1") == 0 ) m_requiredTriggers.push_back( HLT1jetPE1 );
  if( strcmp (triggerString,"HLT1jetPE3") == 0 ) m_requiredTriggers.push_back( HLT1jetPE3 );
  if( strcmp (triggerString,"HLT1jetPE5") == 0 ) m_requiredTriggers.push_back( HLT1jetPE5 );
  if( strcmp (triggerString,"CandHLT1jetPE7") == 0 ) m_requiredTriggers.push_back( CandHLT1jetPE7 );
  if( strcmp (triggerString,"CandHLT1METPre1") == 0 ) m_requiredTriggers.push_back( CandHLT1METPre1 );
  if( strcmp (triggerString,"CandHLT1METPre2") == 0 ) m_requiredTriggers.push_back( CandHLT1METPre2 );
  if( strcmp (triggerString,"CandHLT1METPre3") == 0 ) m_requiredTriggers.push_back( CandHLT1METPre3 );
  if( strcmp (triggerString,"CandHLT2jetAve30") == 0 ) m_requiredTriggers.push_back( CandHLT2jetAve30 );
  if( strcmp (triggerString,"CandHLT2jetAve60") == 0 ) m_requiredTriggers.push_back( CandHLT2jetAve60 );
  if( strcmp (triggerString,"CandHLT2jetAve110") == 0 ) m_requiredTriggers.push_back( CandHLT2jetAve110 );
  if( strcmp (triggerString,"CandHLT2jetAve150") == 0 ) m_requiredTriggers.push_back( CandHLT2jetAve150 );
  if( strcmp (triggerString,"CandHLT2jetAve200") == 0 ) m_requiredTriggers.push_back( CandHLT2jetAve200 );
  if( strcmp (triggerString,"HLT2jetvbfMET") == 0 ) m_requiredTriggers.push_back( HLT2jetvbfMET );
  if( strcmp (triggerString,"HLTS2jet1METNV") == 0 ) m_requiredTriggers.push_back( HLTS2jet1METNV );
  if( strcmp (triggerString,"HLTS2jet1METAco") == 0 ) m_requiredTriggers.push_back( HLTS2jet1METAco );
  if( strcmp (triggerString,"CandHLTSjet1MET1Aco") == 0 ) m_requiredTriggers.push_back( CandHLTSjet1MET1Aco );
  if( strcmp (triggerString,"CandHLTSjet2MET1Aco") == 0 ) m_requiredTriggers.push_back( CandHLTSjet2MET1Aco );
  if( strcmp (triggerString,"CandHLTS2jetAco") == 0 ) m_requiredTriggers.push_back( CandHLTS2jetAco );
  if( strcmp (triggerString,"CandHLTJetMETRapidityGap") == 0 ) m_requiredTriggers.push_back( CandHLTJetMETRapidityGap );
  if( strcmp (triggerString,"HLT1Electron") == 0 )  m_requiredTriggers.push_back( HLT1Electron ); 
  if( strcmp (triggerString,"HLT1ElectronRelaxed") == 0 ) m_requiredTriggers.push_back( HLT1ElectronRelaxed );
  if( strcmp (triggerString,"HLT2Electron") == 0 ) m_requiredTriggers.push_back( HLT2Electron );
  if( strcmp (triggerString,"HLT2ElectronRelaxed") == 0 ) m_requiredTriggers.push_back( HLT2ElectronRelaxed );
  if( strcmp (triggerString,"HLT1Photon") == 0 ) m_requiredTriggers.push_back( HLT1Photon );
  if( strcmp (triggerString,"HLT1PhotonRelaxed") == 0 ) m_requiredTriggers.push_back( HLT1PhotonRelaxed );
  if( strcmp (triggerString,"HLT2Photon") == 0 ) m_requiredTriggers.push_back( HLT2Photon );
  if( strcmp (triggerString,"HLT2PhotonRelaxed") == 0 ) m_requiredTriggers.push_back( HLT2PhotonRelaxed );
  if( strcmp (triggerString,"HLT1EMHighEt") == 0 ) m_requiredTriggers.push_back( HLT1EMHighEt );
  if( strcmp (triggerString,"HLT1EMVeryHighEt") == 0 ) m_requiredTriggers.push_back( HLT1EMVeryHighEt );
  if( strcmp (triggerString,"CandHLT2ElectronZCounter") == 0 ) m_requiredTriggers.push_back( CandHLT2ElectronZCounter );
  if( strcmp (triggerString,"CandHLT2ElectronExclusive") == 0 ) m_requiredTriggers.push_back( CandHLT2ElectronExclusive );
  if( strcmp (triggerString,"CandHLT2PhotonExclusive") == 0 ) m_requiredTriggers.push_back( CandHLT2PhotonExclusive );
  if( strcmp (triggerString,"CandHLT1PhotonL1Isolated") == 0 ) m_requiredTriggers.push_back( CandHLT1PhotonL1Isolated );
  if( strcmp (triggerString,"HLT1MuonIso") == 0 ) m_requiredTriggers.push_back( HLT1MuonIso );
  if( strcmp (triggerString,"HLT1MuonNonIso") == 0 ) m_requiredTriggers.push_back( HLT1MuonNonIso );
  if( strcmp (triggerString,"CandHLT2MuonIso") == 0 ) m_requiredTriggers.push_back( CandHLT2MuonIso );
  if( strcmp (triggerString,"HLT2MuonNonIso") == 0 ) m_requiredTriggers.push_back( HLT2MuonNonIso );
  if( strcmp (triggerString,"HLT2MuonJPsi") == 0 ) m_requiredTriggers.push_back( HLT2MuonJPsi );
  if( strcmp (triggerString,"HLT2MuonUpsilon") == 0 ) m_requiredTriggers.push_back( HLT2MuonUpsilon );
  if( strcmp (triggerString,"HLT2MuonZ") == 0 ) m_requiredTriggers.push_back( HLT2MuonZ );
  if( strcmp (triggerString,"HLTNMuonNonIso") == 0 ) m_requiredTriggers.push_back( HLTNMuonNonIso );
  if( strcmp (triggerString,"HLT2MuonSameSign") == 0 ) m_requiredTriggers.push_back( HLT2MuonSameSign );
  if( strcmp (triggerString,"CandHLT1MuonPrescalePt3") == 0 ) m_requiredTriggers.push_back( CandHLT1MuonPrescalePt3 );
  if( strcmp (triggerString,"CandHLT1MuonPrescalePt5") == 0 ) m_requiredTriggers.push_back( CandHLT1MuonPrescalePt5 );
  if( strcmp (triggerString,"CandHLT1MuonPrescalePt7x7") == 0 ) m_requiredTriggers.push_back( CandHLT1MuonPrescalePt7x7 );
  if( strcmp (triggerString,"CandHLT1MuonPrescalePt7x10") == 0 ) m_requiredTriggers.push_back( CandHLT1MuonPrescalePt7x10 );
  if( strcmp (triggerString,"CandHLT1MuonLevel1") == 0 ) m_requiredTriggers.push_back( CandHLT1MuonLevel1 );
  if( strcmp (triggerString,"HLTB1Jet") == 0 ) m_requiredTriggers.push_back( HLTB1Jet );
  if( strcmp (triggerString,"HLTB2Jet") == 0 ) m_requiredTriggers.push_back( HLTB2Jet );
  if( strcmp (triggerString,"HLTB3Jet") == 0 ) m_requiredTriggers.push_back( HLTB3Jet );
  if( strcmp (triggerString,"HLTB4Jet") == 0 ) m_requiredTriggers.push_back( HLTB4Jet );
  if( strcmp (triggerString,"HLTBHT") == 0 ) m_requiredTriggers.push_back( HLTBHT );
  if( strcmp (triggerString,"HLTB1JetMu") == 0 ) m_requiredTriggers.push_back( HLTB1JetMu );
  if( strcmp (triggerString,"HLTB2JetMu") == 0 ) m_requiredTriggers.push_back( HLTB2JetMu );
  if( strcmp (triggerString,"HLTB3JetMu") == 0 ) m_requiredTriggers.push_back( HLTB3JetMu );
  if( strcmp (triggerString,"HLTB4JetMu") == 0 ) m_requiredTriggers.push_back( HLTB4JetMu );
  if( strcmp (triggerString,"HLTBHTMu") == 0 ) m_requiredTriggers.push_back( HLTBHTMu );
  if( strcmp (triggerString,"HLTBJPsiMuMu") == 0 ) m_requiredTriggers.push_back( HLTBJPsiMuMu );
  if( strcmp (triggerString,"HLT1Tau") == 0 ) m_requiredTriggers.push_back( HLT1Tau );
  if( strcmp (triggerString,"HLT1Tau1MET") == 0 ) m_requiredTriggers.push_back( HLT1Tau1MET );
  if( strcmp (triggerString,"HLT2TauPixel") == 0 ) m_requiredTriggers.push_back( HLT2TauPixel );
  if( strcmp (triggerString,"HLTXElectronBJet") == 0 ) m_requiredTriggers.push_back( HLTXElectronBJet );
  if( strcmp (triggerString,"HLTXMuonBJet") == 0 ) m_requiredTriggers.push_back( HLTXMuonBJet );
  if( strcmp (triggerString,"HLTXMuonBJetSoftMuon") == 0 ) m_requiredTriggers.push_back( HLTXMuonBJetSoftMuon );
  if( strcmp (triggerString,"HLTXElectron1Jet") == 0 ) m_requiredTriggers.push_back( HLTXElectron1Jet );
  if( strcmp (triggerString,"HLTXElectron2Jet") == 0 ) m_requiredTriggers.push_back( HLTXElectron2Jet );
  if( strcmp (triggerString,"HLTXElectron3Jet") == 0 ) m_requiredTriggers.push_back( HLTXElectron3Jet );
  if( strcmp (triggerString,"HLTXElectron4Jet") == 0 ) m_requiredTriggers.push_back( HLTXElectron4Jet );
  if( strcmp (triggerString,"HLTXMuonJets") == 0 ) m_requiredTriggers.push_back( HLTXMuonJets );
  if( strcmp (triggerString,"HLTXElectronMuon") == 0 ) m_requiredTriggers.push_back( HLTXElectronMuon );
  if( strcmp (triggerString,"HLTXElectronMuonRelaxed") == 0 ) m_requiredTriggers.push_back( HLTXElectronMuonRelaxed );
  if( strcmp (triggerString,"HLTXElectronTau") == 0 ) m_requiredTriggers.push_back( HLTXElectronTau );
  if( strcmp (triggerString,"HLTXMuonTau") == 0 ) m_requiredTriggers.push_back( HLTXMuonTau );
  if( strcmp (triggerString,"CandHLTHcalIsolatedTrack") == 0 ) m_requiredTriggers.push_back( CandHLTHcalIsolatedTrack );
  if( strcmp (triggerString,"HLTMinBiasPixel") == 0 ) m_requiredTriggers.push_back( HLTMinBiasPixel );
  if( strcmp (triggerString,"HLTMinBias") == 0 ) m_requiredTriggers.push_back( HLTMinBias );
  if( strcmp (triggerString,"HLTZeroBias") == 0 ) m_requiredTriggers.push_back( HLTZeroBias );

}

