#include <iostream>
#include "CharacterCreation.h"
#include "SaveLoad.h"
#include "MakeChoices.h"

using namespace std;

int main() {
    CharacterCreation testGame;
    SaveLoad gameData;
    
    cout << "Welcome to game demo.\nSince savegames have yet to be implemented, it's time to roll stats.\n";
    cout << "Rolling stats...\n";
    
    testGame.RollAll();
    
    cout << "Finished rolling stats. Showing.\n";
    
    testGame.ShowAllStats();
    
    cout << "Loading game from save.\n";
    testGame = gameData.LoadGame(testGame);
    testGame.ShowAllStats();
    
    /*
    cout << "Saving game.\n";
    gameData.SaveGame(testGame);
    cout << "Game saved.\n";
    */

    cin.get();
    return 0;
}
