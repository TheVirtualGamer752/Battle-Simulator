#pragma once
#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include <fstream>
#include "Weapon.h"
using namespace std;

class inventory {
private:
	string types[5] = { "One handed", "Two handed", "Projectile", "Defence", "Enchanted" };
	string names[9];
	weapon weapons[9];
	int weaponsOwned = 0;
public:
	inventory(string filename) {
		ReadDataFromWeaponFile(filename);
	}

	void ReadDataFromWeaponFile(string path) {
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

	string generateWeapon() {
		int index = rand() % 9;
		return names[index];
	}

	void wieldNewWeapon() {
		if (weaponsOwned >= 9) {
			cout << weaponsOwned << " is maximum amount of weapons you can hold." << endl;
			return;
		}
		int damage = rand() % 100 + 1;
		int mass = rand() % 50 + 1;
		int strength = rand() % 75 + 1;
		int req_level = rand() % 9 + 1;
		weapon someWeapon(damage, generateWeapon(), mass, strength, req_level);
		weapons[weaponsOwned] = someWeapon;
		weaponsOwned++;
	}

	void showList_of_Weapons() {
		for (int i = 0; i < weaponsOwned; i++) {
			weapons[i].weaponInfo();
			cout << endl;
		}
	}

	weapon* getRandomWeapon() {
		int index = rand() % weaponsOwned + 1;
		return &weapons[index];
	}
};