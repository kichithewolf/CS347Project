#ifndef HANDLE_INPUT_H
#define HANDLE_INPUT_H

#include <iostream>
#include <string>
#include "CharacterCreation.h"
#include "SaveLoad.h"
#include "MakeChoices.h"

using namespace std;

class HandleInput {

      public:
             int GetInput(CharacterCreation character, SaveLoad savegame, MakeChoices choices);
             int DecideAction(string input, CharacterCreation character, SaveLoad savegame, MakeChoices choices);
             string GetName();
};
#endif
