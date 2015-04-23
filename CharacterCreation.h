#ifndef CHARACTER_CREATION_H
#define CHARACTER_CREATION_H

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>

using namespace std;

class CharacterCreation {

      public:
        string characterName;
        int numberOfStats;
        int stats[5];
        
        void RollAll();
        int SetStat(int statIndex, int value);
        int IncrementStat(int statIndex, int value);
        int DecrementStat(int statIndex, int value);
        int GetStat(int statIndex);
        void ShowAllStats();
        void SetName(string name);
};
#endif
