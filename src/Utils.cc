#include "CommonTools/include/Utils.hh"
#include <math.h>
#include <iostream>

using namespace bits;

bool Utils::getTriggersAND(std::vector<int> requiredTriggers, bool firedTrg[159]) {

  if ( requiredTriggers.size() == 0 ) return true;

  for( int i=0; i<requiredTriggers.size(); i++ ) {
    if ( !firedTrg[ requiredTriggers[i] ] ) return false;
  }

  return true;

}

bool Utils::getTriggersOR(std::vector<int> requiredTriggers, bool firedTrg[159]) {

  if ( requiredTriggers.size() == 0 ) return true;
  
  for( int i=0; i<requiredTriggers.size(); i++ ) {
    if ( firedTrg[ requiredTriggers[i] ] ) return true;
  }

  return false;

}

bool Utils::isInElectronFiducialEta(float eta) {

  return ( fabs(eta) < 1.4442 || // EB
	   (fabs(eta) > 1.560 && fabs(eta) < 2.5 ) // EE
	   );

}

bool Utils::isInECALFiducial(int word) {

  return ( ( (word >> isEE)%2 || (word >> isEB)%2 ) && !((word >> isGap)%2) );

}

bool Utils::muonIdVal(int word, MuonIdBit bit) {

  return (word >> bit)%2;

}

bool Utils::electronIdVal(int word, ElectronIdBit bit) {

  return (word >> bit)%2;

}

bool Utils::electronRecoType(int word, ElectronRecoBit bit) {

  return (word >> bit)%2;

}

bool Utils::electronEnergyCorrectionType(int word, ElectronEnergyCorrectionBit bit) {

  return (word >> bit)%2;
  
}
