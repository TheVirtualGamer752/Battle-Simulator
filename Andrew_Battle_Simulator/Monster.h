#pragma once
#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include "Entity.h"
using namespace std;

class Monster :public Entity {
private:
	int damage;
public:
	Monster(string name, int max_hp, int hp, int damage):Entity(name, max_hp, hp) {
		this->damage = damage;
	}

	string getInfo() {

	}

	int doDamage() {

	}

	void receiveDamage(int damage) {

	}
};