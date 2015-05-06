#ifndef MAKE_CHOICES_H
#define MAKE_CHOICES_H

#include <iostream>
#include "CharacterCreation.h"
#include "SaveLoad.h"
#include "HandleInput.h"
using namespace std;
class MakeChoices {

      public:
             int sceneID; //Needs to be written to save.
             
             /*
             After this are all custom scenes depending on game.
             */
             int Scene(); //Takes prev in case relies?
             void TestScene1(CharacterCreation, SaveLoad, HandleInput);
             void TestScene2(CharacterCreation, SaveLoad, HandleInput);
             void TestScene3();
};
#endif
