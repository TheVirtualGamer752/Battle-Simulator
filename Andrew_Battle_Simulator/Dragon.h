#pragma once
#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include "Monster.h"
using namespace std;

class Dragon :public Monster {
private:
	int size;
	bool is_fly;
public:
	Dragon(string name, int max_hp, int hp, int damage, int size, int is_fly):Monster(name, max_hp, hp, damage) {
		this->size = size;
		this->is_fly = is_fly;
	}

	string getInfo() {

	}

	int getDamage() {

	}

	void receiveDamage() {

	}

	int breathFire() {

	}
};