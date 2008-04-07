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

protected:

};

#endif

