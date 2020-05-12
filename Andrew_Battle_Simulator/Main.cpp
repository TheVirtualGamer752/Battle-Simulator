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

void bubbleSort() {
    int amount = rand() % 20;
    int* number = new int[amount];

    for (int i = 0; i < amount; i++) {
        number[i] = rand() % 50 + 1;
    }

    for (int j = 0; j < amount; j++) {
        for (int k = amount - 1; k >= j ; k--) {
            if (number[k-1] > number[k]) {
                int i = number[k - 1];
                number[k - 1] = number[k];
                number[k] = i;
            }
        }
    }

    cout << "Amount of damage: " << endl;
    for (int i = 0; i < amount; i++) {
        cout << number[i] << ' ';
    }
}

int main() {
    srand(time(NULL));

    bubbleSort();

    cout << "Why remove the code?" << endl;

    return 0;
}
