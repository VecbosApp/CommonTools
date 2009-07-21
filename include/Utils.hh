#ifndef UTILS_H
#define UTILS_H

#include <vector>
#include "CommonTools/include/LeptonIdBits.h"

class Utils {

public:

  Utils() { }

  //! returns the AND of the requested triggers
  bool getTriggersAND(std::vector<int> requiredTriggers, bool firedTrg[159]);
  //! returns the OR of the requested triggers
  bool getTriggersOR(std::vector<int> requiredTriggers, bool firedTrg[159]);
  //! returns true if eta belongs to the electron fiducial region:
  //! remove the gap between EB - EE plus some crystal in the bounds
  bool isInElectronFiducialEta(float eta);
  //! get value of the bit corresponding to certain muon ID 
  bool muonIdVal(int word, MuonIdBit bit);

protected:

};

#endif

