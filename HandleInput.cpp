#include "HandleInput.h"

/*
This prompts the user for input.
*/
void HandleInput::GetInput() {
     string input;
     cout << "> ";
     cin >> input;

     //cout << "Input recieved: " << input << ".\n";
     //cout << "Passing...\n";
     
     DecideAction(input);
}

/*
Takes the given input and deals with it.
*/
void HandleInput::DecideAction(string input) {
     if(input.compare("up") == 0) {
        cout << "User entered up.\n";
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
