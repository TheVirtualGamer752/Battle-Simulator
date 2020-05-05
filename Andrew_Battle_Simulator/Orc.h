#pragma once
#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include "Monster.h"
using namespace std;

class Orc :public Monster {
private:
	int speed;
public:
	Orc(string name, int max_hp, int hp, int damage, int speed):Monster(name, max_hp, hp, damage) {
		this->speed = speed;
	}

	string getInfo() {

	}

	int getDamage() {

	}

	void receiveDamage() {

	}

	int chargeAttack() {

	}
};