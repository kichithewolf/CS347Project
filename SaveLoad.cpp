#include "SaveLoad.h"

/*
Writes all relevant game data to a text file.
*/
void SaveLoad::SaveGame(CharacterCreation character) {
         ofstream save("savegame.sav");
         
         //Individual stats are seperated by a " ".
         for(int i = 0; i < 5; i++) {
                 save << character.stats[i] << " ";
         }
         //Other information is seperated by newlines.
         save << "\n";
         save << character.characterName;
         
         save.close();
}

/*
Reads all relevant game data from a text file.
*/
CharacterCreation SaveLoad::LoadGame(CharacterCreation character) {
     int x;
     string n;
     string t;
     ifstream save("savegame.sav");
     if(save) {
         for(int i = 0; i < 5; i++) {
                 save >> x;
                 //cout << x;
                 character.stats[i] = x;
         }
         while(!save.eof()) {
            save >> n;
            t += n + " ";
         }
         character.characterName = t;
         save.close();
     } else {
            cout << "Save not found/loadable!\n";
     }
         
     return character;
}
