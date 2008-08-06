#ifndef UTILS_H
#define UTILS_H

#include <vector>

class Utils {

public:

  Utils() { }

  //! returns the AND of the requested triggers
  bool getTriggersAND(std::vector<int> requiredTriggers, bool firedTrg[90]);
  //! returns the OR of the requested triggers
  bool getTriggersOR(std::vector<int> requiredTriggers, bool firedTrg[90]);
  //! returns true if eta belongs to the electron fiducial region:
  //! remove the gap between EB - EE plus some crystal in the bounds
  bool isInElectronFiducialEta(float eta);

protected:

};

#endif

