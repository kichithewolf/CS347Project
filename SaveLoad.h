#ifndef SAVE_LOAD_H
#define SAVE_LOAD_H

#include "CharacterCreation.h"

class SaveLoad {
      public:
             void SaveGame(CharacterCreation character);
             CharacterCreation LoadGame(CharacterCreation character);
};
#endif
