#pragma once
#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include <fstream>
#include "Entity.h"
#include "NameGenerator.h"
#include "SpellBook.h"
#include "Inventory.h"
using namespace std; // Standard Template Definition or Super Traditional Definition

void generateName() {
    NameGenerator generator("HeroNames.csv");
    Entity n1("Some name", 500, 500);
    n1.getInfo(generator);
}

void bubbleSort(int *array, int amount) {
  

    //move to generate damage
   /* for (int i = 0; i < amount; i++) {
        array[i] = rand() % 50 + 1;
    }*/

    for (int j = 0; j < amount; j++) {
        for (int k = amount - 1; k >= j ; k--) {
            if (array[k-1] > array[k]) {
                int i = array[k - 1];
                array[k - 1] = array[k];
                array[k] = i;
            }
        }
    }

    
}

int main() {
    srand(time(NULL));

    generateName();

    spellBook spellBook("Spells.csv");
    spellBook.learnNewSpell();
    spellBook.showList_of_Spells();

    cout << endl;

    generateName();

    inventory inventory("Weapons.csv");
    inventory.wieldNewWeapon();
    inventory.showList_of_Weapons();

    cout << endl;

    int amount = rand() % 20;
    int* damages = new int[amount];

    //generateDamage(numbers, size);

    bubbleSort(damages, amount);
  
    //binary search (damages, 55) // return index of  value 55 - 5  // return -1
    //https://www.geeksforgeeks.org/binary-search/
    cout << "Amount of damage: " << endl;
    for (int i = 0; i < amount; i++) {
        cout << damages[i] << ' ';
    }

    cout << "Why remove the code?" << endl;

    return 0;
}
