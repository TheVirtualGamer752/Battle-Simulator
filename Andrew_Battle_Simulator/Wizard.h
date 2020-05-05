#pragma once
#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include "Mage.h"
using namespace std;

class Wizard :public Mage{
private:
	string gender;
public:
	Wizard(string name, int max_hp, int hp, int level, int mana, int max_mana, spell spell, string gender):Mage(name, max_hp, hp, level, mana, max_mana, spell) {
		this->gender = gender;
	}
};