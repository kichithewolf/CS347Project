#include <iostream>
#include "CharacterCreation.h"
#include "SaveLoad.h"
#include "HandleInput.h"
#include "MakeChoices.h"

/* This is for testing */
#include <limits.h>

using namespace std;

int main() {
    CharacterCreation testGame;
    SaveLoad gameData;
    HandleInput inputs;
    MakeChoices choices;
    
    CharacterCreation loadGameTest;
    
    /*
    Unit Tests
    */
    
    /* init stats (not yet working)*/
    cout << "Show all uninitialized.\n";
    testGame.ShowAllStats();
    cout << "\nRoll numbers random.\n";
    testGame.RollAll();
    testGame.ShowAllStats();
    
    /* Increment stat */
    cout << "\nSet stat[0] to 100, then try to increment. Should be 100.\n";
    testGame.SetStat(0, 100);
    testGame.IncrementStat(0, 1);
    /*
    Testing for character input
    cout << "Set stat[0] to a character, Error Message. Should be 0.\n";
    testGame.SetStat(0,0);
    testGame.IncrementStat(0,a);
    */
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
    /*
    Try testing for character inputs
    cout << "Set stat[0] to a character, Error Message. Should be 0.\n";
    testGame.SetStat(0,0);
    testGame.DecrementStat(0,a);
    */
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
    
    /* done testing save/load */
    /* now testing handle input */
    
    testGame.SetName(inputs.GetName());
    cout << "Entered name is " << testGame.characterName << ".\n";
    
    cout << "Testing handle input. valid inputs:\n";
    cout << "up down left right save load exit stats\n";
    
    inputs.GetInput(testGame, gameData, choices);
    
    choices.Scene();


    system("pause"); //windows only
    return 0;
}
