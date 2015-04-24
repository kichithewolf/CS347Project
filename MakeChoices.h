#ifndef MAKE_CHOICES_H
#define MAKE_CHOICES_H

#include <iostream>
using namespace std;
class MakeChoices {

      public:
             int sceneID; //Needs to be written to save.
             
             /*
             After this are all custom scenes depending on game.
             */
             int Scene(int previousID); //Takes prev in case relies?
};
#endif
