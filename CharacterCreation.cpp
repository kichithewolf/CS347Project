#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "CharacterCreation.h"

using namespace std;

/*
Rolls values for each stat.
*/
void CharacterCreation::RollAll() {
     numberOfStats = 5;
     srand(time(NULL));
     for(int i = 0; i < numberOfStats; i++) {
             stats[i] = rand() % 100 + 1;
             //cout << "Rolled: " << stats[i] << ".\n";
     }
}

/*
Sets a value to a stat, given the index and the value.
Returns the set value. Used to manually set a specific value.
*/
int CharacterCreation::SetStat(int statIndex, int value) {
    stats[statIndex] = value;
    return stats[statIndex];
}

/*
Increments a stat by value.
*/
int CharacterCreation::IncrementStat(int statIndex, int value) {
    stats[statIndex] += value;
    return stats[statIndex];
}

/*
Decrements a stat by value.
*/
int CharacterCreation::DecrementStat(int statIndex, int value) {
    stats[statIndex] -= value;
    return stats[statIndex];
}

/*
Returns the value of a single stat.
*/
int CharacterCreation::GetStat(int statIndex) {
    return stats[statIndex];
}

/*
Prints all stat values.
*/
void CharacterCreation::ShowAllStats() {
     numberOfStats = 5;
     for(int i = 0; i < numberOfStats; i++) {
             cout << "Stat " << i << ": " << stats[i] << ".\n";
     }
}
