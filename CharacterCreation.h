#ifndef CHARACTER_CREATION_H
#define CHARACTER_CREATION_H

class CharacterCreation {

      public:
        int numberOfStats;
        int stats[5];
        
        void RollAll();
        int SetStat(int statIndex, int value);
        int IncrementStat(int statIndex, int value);
        int DecrementStat(int statIndex, int value);
        int GetStat(int statIndex);
        void ShowAllStats();
};
#endif
