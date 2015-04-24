#include "HandleInput.h"

/*
This prompts the user for input.
*/
void HandleInput::GetInput(CharacterCreation character, SaveLoad savegame, MakeChoices choices) {
     string input;
     cout << "> ";
     cin >> input;

     //cout << "Input recieved: " << input << ".\n";
     //cout << "Passing...\n";
     
     DecideAction(input, character, savegame, choices);
}

/*
Takes the given input and deals with it.
*/
void HandleInput::DecideAction(string input, CharacterCreation character, SaveLoad savegame, MakeChoices choices) {
     if(input.compare("up") == 0) {
            cout << "User entered up.\n";
     } else if(input.compare("down") == 0) {
            cout << "user entered down.\n";
     } else if(input.compare("left") == 0) {
            cout << "user entered left\n";
     } else if(input.compare("right") == 0) {
            cout << "user entered right\n";
     } else if(input.compare("save") == 0) {
            cout << "Saving...\n";
            savegame.SaveGame(character);
            cout << "Done. This was saved:\n";
            character.ShowAllStats();
     } else if(input.compare("load") == 0) {
            cout << "Loading...\n";
            character = savegame.LoadGame(character);
            cout << "Done. This was loaded.\n";
            character.ShowAllStats();
     } else if(input.compare("stats") == 0) {
            character.ShowAllStats();
     } else if(input.compare("exit") == 0) {
            cout << "Exiting. Goodbye.\n";
            exit(0);
     } else {
            cout << "Input not valid!\n";
     }
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
