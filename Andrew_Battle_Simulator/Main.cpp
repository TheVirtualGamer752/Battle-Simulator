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

int main() {
    srand(time(NULL));

    generateName();

    spellBook spellBook("Spells.csv");
    spellBook.learnNewSpell();
    spellBook.showList_of_Spells();

    generateName();

    inventory inventory("Weapons.csv");
    inventory.wieldNewWeapon();
    inventory.showList_of_Weapons();

    return 0;
}

//NameGenerator generator;
//generator.readDataFromFile("HeroNames.csv");
//cout << generator.generateName();