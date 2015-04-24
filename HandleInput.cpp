#include "HandleInput.h"

/*
This prompts the user for input.
*/
int HandleInput::GetInput(CharacterCreation character, SaveLoad savegame, MakeChoices choices) {
     string input;
     cout << "> ";
     cin >> input;

     //cout << "Input recieved: " << input << ".\n";
     //cout << "Passing...\n";
     
     return DecideAction(input, character, savegame, choices);
}

/*
Takes the given input and deals with it.
0: save/load/stats/exit
1, 2, 3, 4: up, down, left, right
-1: invalid input
*/
int HandleInput::DecideAction(string input, CharacterCreation character, SaveLoad savegame, MakeChoices choices) {
    int retvalue = 0;
     if(input.compare("up") == 0) {
            //cout << "User entered up.\n";
            retvalue = 1;
     } else if(input.compare("down") == 0) {
            //cout << "user entered down.\n";
            retvalue = 2;
     } else if(input.compare("left") == 0) {
            //cout << "user entered left\n";
            retvalue = 3;
     } else if(input.compare("right") == 0) {
            //cout << "user entered right\n";
            retvalue = 4;
     } else if(input.compare("save") == 0) {
            cout << "Saving...\n";
            savegame.SaveGame(character);
            cout << "Done. This was saved:\n";
            character.ShowAllStats();
     } else if(input.compare("load") == 0) {
            cout << "Loading...\n";
            character = savegame.LoadGame(character);
            cout << "Done. The following was loaded.\n";
            character.ShowAllStats();
     } else if(input.compare("stats") == 0) {
            character.ShowAllStats();
     } else if(input.compare("exit") == 0) {
            cout << "Exiting. Goodbye.\n";
            exit(0);
     } else {
            cout << "Input not valid!\n";
            retvalue = -1;
     }
     return retvalue;
}

/*
Prompts for character name. Used at start of game.
*/
string HandleInput::GetName() {
     string name;
     cout << "Please enter your character name: ";
     //TODO: get whole line of name
     cin >> name;
     //cout << name << "\n";
     return name;
}
