#pragma once
#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include <fstream>
#include "Spell.h"
using namespace std;

class spellBook {
private:
    string affects[4] = {"Frozen", "Burning", "Paralised", "Poisen"};
    string names[20];
	spell spells[20];
    int currentSpellsAmount = 0;
public:
    spellBook() {

    }

	spellBook(string fileName) {
		readDataFromSpellsFile(fileName);
	}

	void readDataFromSpellsFile(string path) {
        string line;
        ifstream myfile(path);
        if (myfile.is_open()) {
            for (int i = 0; getline(myfile, line); i++) {
                names[i] = line;
            }
            myfile.close();
        }
        else cout << "Unable to open file";
	}

    string generateSpellName() {
        int index = rand() % 20;
        return names[index];
    }

    string generateAffect() {
        int index = rand() % 4;
        return affects[index];
    }

    void learnNewSpell() {
        if (currentSpellsAmount >= 20) {
            cout << "You have just reached the maximum amount of spells." << endl;
            return;
        }
        int damage = rand() % 100 + 1;
        int mana = rand() % 50 + 1;
        int req_level = rand() % 20 + 1;
        spell someSpell(damage, generateSpellName(), mana, req_level, generateAffect());
        spells[currentSpellsAmount] = someSpell;
        currentSpellsAmount++;
    }

    void showList_of_Spells() {
        for (int i = 0; i < currentSpellsAmount; i++) {
          spells[i].spellInfo();
          cout << endl;
        }
    }

    spell* getRandomSpell() {
        int index = rand() % currentSpellsAmount+1;
        return &spells[index];
    }
};