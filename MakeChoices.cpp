#include "MakeChoices.h"

/*
Creates a new scene/scenario/label.
*/
int MakeChoices::Scene() {
    cout << "Test scene please ignore\n";
    
    return 0;
}

/*
Demo Game
*/
void MakeChoices::TestScene1(CharacterCreation character, SaveLoad savegame, HandleInput inputs) {
     int i;
     cout << "Your name is " << character.characterName << ", and you just realized that there is no food in the fridge.\n";
     cout << "(Well, go get some then!)\nYou know. That's the whole point of this quest.\n";
     cout << "You put on your shoes and blahblahblah, and head out.\nNow, which way was the shop again?\n";
     
     while((i = inputs.GetInput(character, savegame)) == -1 || i == 0) {
              if(i == 0) {
                   character = savegame.LoadGame(character);
              }
     }
     
     if(i == 2) {
           cout << "You decide that this is all too much effort.\n...And that there was a really good pizza place behind you.\n";
           cout << "...So you decide to go eat there instead.\n";
           cout << "Game Over.\n";
     } else {
            TestScene2(character, savegame, inputs);
     }
}

void MakeChoices::TestScene2(CharacterCreation character, SaveLoad savegame, HandleInput inputs) {
     cout << "You set off.\n";
     cout << "Yet, something seems wrong.\n";
     cout << "STATS CHECK: " << character.GetStat(0) << " vs. 25\n";
     
     if(character.GetStat(0) > 25) {
        cout << "SUCCESS\n";
        cout << "You notice that you are walking on a road, toward incoming cars.\n";
        cout << "You wisely get onto the sidewalk.\n";
        TestScene3();
     } else {
          cout << "FAILURE\n";
          cout << "You walk straight into incoming traffic and die.\n";
          cout << "Look both ways next time!\n";
          cout << "(Or roll better stats...)\n";
          cout << "Game Over.\n";
     }

}

void MakeChoices::TestScene3() {
     cout << "You walk along some more, until you finally reach the store.\n";
     cout << "To celebrate your successful arrival, you buy food.\n";
     cout << "Lots of food. That was the whole point of this trip, after all.\n";
     cout << "So yeah. The end and all that.\n";
}
