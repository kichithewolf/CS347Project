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
    
    /*
    Unit Tests
    */
    
    testGame.ShowAllStats();
    testGame.RollAll();
    testGame.ShowAllStats();
    testGame.IncrementStat(0, 1); //Need to test boundaries and negative numbers and stuff.
    testGame.ShowAllStats();
    testGame.DecrementStat(0, 1);
    testGame.ShowAllStats();
    testGame.SetStat(0, 0);
    testGame.ShowAllStats();
    testGame.SetName("test name");
    
    
    
    /*
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
    
    cout << "Loading game from save.\n";
    testGame = gameData.LoadGame(testGame);
    testGame.ShowAllStats();
    
    cout << "Enter input.\n";
    inputs.GetInput(testGame, gameData, choices);
    
    cout << "Saving game.\n";
    gameData.SaveGame(testGame);
    cout << "Game saved.\n";
    */
    return 0;
}
