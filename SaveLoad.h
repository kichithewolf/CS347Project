#ifndef SAVE_LOAD_H
#define SAVE_LOAD_H

#include "CharacterCreation.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class SaveLoad {
      public:
             void SaveGame(CharacterCreation character);
             CharacterCreation LoadGame(CharacterCreation character);
};
#endif
