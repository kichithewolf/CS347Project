#include <iostream>
#include "CharacterCreation.h"
#include "SaveLoad.h"
#include "MakeChoices.h"
#include "HandleInput.h"

/* This is for testing */
#include <limits.h>

using namespace std;

int main() {
    CharacterCreation testGame;
    SaveLoad gameData;
    MakeChoices choices;
    HandleInput inputs;
    
    CharacterCreation loadGameTest;
    
    /*
    Unit Tests
    */
    
    /* init stats */
    cout << "Show all uninitialized.\n";
    testGame.ShowAllStats();
    cout << "\nRoll numbers random.\n";
    testGame.RollAll();
    testGame.ShowAllStats();
    
    /* Increment stat */
    cout << "\nSet stat[0] to 100, then try to increment. Should be 100.\n";
    testGame.SetStat(0, 100);
    testGame.IncrementStat(0, 1);
    cout << "Stat is now: " << testGame.GetStat(0) << "\n";
    cout << "Set stat[0] to 100, then try to increment max neg. Should error, be 100.\n";
    testGame.SetStat(0, 100);
    testGame.IncrementStat(0, INT_MIN);
    cout << "Stat is now: " << testGame.GetStat(0) << "\n";
    cout << "Set stat[0] to 50, then try to increment max pos. Should be 100.\n";
    testGame.SetStat(50, INT_MAX);
    cout << "Stat is now: " << testGame.GetStat(0) << "\n";

    /* Decrement stat */
    cout << "Set stat[0] to 0, then try to decrement. Should be 0.\n";
    testGame.SetStat(0, 0);
    testGame.DecrementStat(0, 1);
    cout << "Stat is now: " << testGame.GetStat(0) << "\n";
    cout << "Set stat[0] to 0, then try to decrement max neg. Should be error, be 0.\n";
    testGame.SetStat(0, 0);
    testGame.DecrementStat(0, INT_MIN);
    cout << "Stat is now: " << testGame.GetStat(0) << "\n";
    cout << "Set stat[0] to 0, then try to decrement max pos. Should be 0.\n";
    testGame.SetStat(0, 0);
    testGame.DecrementStat(0, 1);
    cout << "Stat is now: " << testGame.GetStat(0) << "\n";
    
    /* etc. setting stats */
    cout << "Try to set stat[0] to something out of range. Should be whatever was last.\n";
    testGame.SetStat(0, INT_MAX+1);
    cout << "Stat is now: " << testGame.GetStat(0) << "\n";
    
    /* name */
    cout << "Not initialized name, should be blank (>><<): >>" << testGame.characterName << "<<\n";
    cout << "Set name to \"test name\": ";
    testGame.SetName("test name");
    cout << testGame.characterName << "\n";
    
    /* Finished Character Creation tests */
    /* Testing save load */
    
    cout << "\nTrying to load a game, it does not exist (if this is the first run)\n";
    gameData.LoadGame(loadGameTest);
    
    //Save game
    cout << "\nTesting save game, setting all stats to 0 for test.\n";
    testGame.SetStat(0, 0);
    testGame.SetStat(1, 0);
    testGame.SetStat(2, 0);
    testGame.SetStat(3, 0);
    testGame.SetStat(4, 0);
    testGame.SetName("save game name test");
    gameData.SaveGame(testGame);
    cout << "Game saved.";
    
    //load game
    cout << "\nTesting load game.\n";
    loadGameTest = gameData.LoadGame(loadGameTest);
    loadGameTest.ShowAllStats();
    cout << "name: " << loadGameTest.characterName << "\n";
    
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
    system("pause");
    return 0;
}
