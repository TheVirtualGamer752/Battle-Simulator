#pragma once
#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include "Hero.h"
#include "Weapon.h"
using namespace std;

class Warrior :public Hero {
private:
	int stamina;
	weapon weapon;
public:
	Warrior(string name, int max_hp, int hp, int level, int stamina):Hero(name, max_hp, hp, level) {
		this->stamina = stamina;
	}

	string getInfo() {

	}

	int getDamage() {

	}

	void receiveDamage() {

	}

	int doFuryAttack() {

	}
};