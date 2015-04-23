#include "SaveLoad.h"

/*
Writes all relevant game data to a text file.
*/
void SaveLoad::SaveGame(CharacterCreation character) {
         ofstream save("savegame.txt");
         
         //Individual stats are seperated by a " ".
         for(int i = 0; i < 5; i++) {
                 save << character.stats[i] << " ";
         }
         //Other information is seperated by newlines.
         save << "\n";
         
         save.close();
}

/*
Reads all relevant game data from a text file.
*/
CharacterCreation SaveLoad::LoadGame(CharacterCreation character) {
     int x;
     ifstream save("savegame.txt");
     //TODO: Check for correct savegame (number of stats, etc.)
     if(save) {
         for(int i = 0; i < 5; i++) {
                 save >> x;
                 //cout << x;
                 character.stats[i] = x;
         }
         save.close();
     } else {
            cout << "Save not found/loadable!\n";
     }
         
     return character;
}
