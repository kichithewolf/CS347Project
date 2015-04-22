#include <iostream>
#include "CharacterCreation.h"

using namespace std;

int main() {
    CharacterCreation testGame;
    
    cout << "Welcome to game demo.\nSince savegames have yet to be implemented, it's time to roll stats.\n";
    cout << "Rolling stats...\n";
    
    testGame.RollAll();
    
    cout << "Finished rolling stats.\n";

    cin.get();
    return 0;
}
