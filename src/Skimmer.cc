#include <fstream.h>
#include <iostream.h>

#include "CommonTools/include/Skimmer.hh"

Skimmer::Skimmer(const char *skimTxtFile) {
  m_file = skimTxtFile;
}

Skimmer::~Skimmer() {}

void Skimmer::readFile() {

  std::cout << ">>> Initializing the skim, this will take some time..." << endl;

  ifstream skimFile(m_file);
  while(!skimFile.eof()) {
    int bit = -1;
    skimFile >> bit;
    bits.push_back(bit);
  }

  std::cout << "<<< Skim initialized. Now run. " << std::endl;

}

bool Skimmer::output(int event) {

  if( bits.size() == 0 ) {
    cout << "SKIMMER: probably you have not initialised correctly the skim from file..." << std::endl; 
  }

  if( event > bits.size() ) {
    std::cout << "!!! Serious ERROR! The number of requested event is larger than the skim file!" << std::endl;
    return 0;
  } else {
    return bits[event];
  }

}
