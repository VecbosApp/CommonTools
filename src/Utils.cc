#include "CommonTools/include/Utils.hh"
#include <math.h>
#include <iostream>

bool Utils::getTriggersAND(std::vector<int> requiredTriggers, bool firedTrg[90]) {

  if ( requiredTriggers.size() == 0 ) return true;

  for( int i=0; i<requiredTriggers.size(); i++ ) {
    if ( !firedTrg[ requiredTriggers[i] ] ) return false;
  }

  return true;

}

bool Utils::getTriggersOR(std::vector<int> requiredTriggers, bool firedTrg[90]) {

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
