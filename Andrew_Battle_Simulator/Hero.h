#pragma once
#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include "Entity.h"
using namespace std;

class Hero :public Entity{
private:
	int level;
public:
	Hero(string name, int max_hp, int hp, int level):Entity(name, max_hp, hp) {
		this->level = level;
	}

	void levelUP(int level) {

	}
};