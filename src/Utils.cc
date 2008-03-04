#include "CommonTools/include/Utils.hh"
#include <iostream>

bool Utils::getTriggersAND(std::vector<int> requiredTriggers, bool firedTrg[90]) {

  if ( requiredTriggers.size() == 0 ) return true;

  for( int i=0; i<requiredTriggers.size(); i++ ) {
    if ( !firedTrg[ requiredTriggers[i] ] ) return false;
  }

  return true;

}
