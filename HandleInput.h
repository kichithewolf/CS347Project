#ifndef HANDLE_INPUT_H
#define HANDLE_INPUT_H

#include <iostream>
#include <string>
#include "CharacterCreation.h"

using namespace std;

class HandleInput {

      public:
             void GetInput();
             void DecideAction(string input);
             string GetName();
};
#endif
