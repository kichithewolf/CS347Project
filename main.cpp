#include <iostream>
#include "CharacterCreation.h"
#include "SaveLoad.h"
#include "MakeChoices.h"
#include "HandleInput.h"

using namespace std;

int main() {
    CharacterCreation testGame;
    SaveLoad gameData;
    MakeChoices choices;
    HandleInput inputs;
    
    cout << "Welcome to game demo.\nSince savegames have yet to be implemented, it's time to roll stats.\n";
    cout << "Rolling stats...\n";
    
    testGame.RollAll();
    
    cout << "Finished rolling stats. Showing.\n";
    
    testGame.ShowAllStats();
    
    cout << "What about a character name?\n";
    testGame.SetName(inputs.GetName());
    //TODO name not working. Probably something dumb I overlooked.
    cout << "So your name is " << testGame.characterName << "?\n";
    cout << "Sounds good.\n";
    
    /*
    cout << "Loading game from save.\n";
    testGame = gameData.LoadGame(testGame);
    testGame.ShowAllStats();
    */
    
    cout << "Saving game.\n";
    gameData.SaveGame(testGame);
    cout << "Game saved.\n";
    
    
    /*
    cout << "Enter input.\n";
    inputs.GetInput();
    */

    //cin.get();
    return 0;
}
