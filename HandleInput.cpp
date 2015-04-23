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
     } else if(input.compare("save") == 0) {
            cout << "Saving...\n";
            savegame.SaveGame(character);
            cout << "Done.\n";
     }
}

/*
Prompts for character name. Used at start of game.
*/
string HandleInput::GetName() {
     string name;
     cout << "Please enter your character name: ";
     cin >> name;
     //cout << name << "\n";
     return name;
}
