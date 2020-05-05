#pragma once
#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include "NameGenerator.h"
using namespace std;

class Entity {
private:
	string name;
	int max_hp;
	int hp;
public:
	Entity(string name, int max_hp, int hp) {
		this->name = name;
		this->max_hp = max_hp;
		this->hp = hp;
	}

	string getInfo(NameGenerator name) {
		cout << name.generateName() << endl;
		return "";
	}

	int diceRoll() {

	}

	int doDamage() {

	}

	void receiveDamage() {

	}

	string getName() {

	}
};