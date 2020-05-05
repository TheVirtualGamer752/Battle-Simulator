#pragma once
#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include "Monster.h"
using namespace std;

class Giant :public Monster {
private:
	int ext_life;
public:
	Giant(string name, int max_hp, int hp, int damage, int ext_life):Monster(name, max_hp, hp, damage) {
		this->ext_life = ext_life;
	}

	string getInfo() {

	}

	int getDamage() {

	}

	void receiveDamage() {

	}

	int clubSwing() {

	}
};