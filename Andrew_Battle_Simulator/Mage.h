#pragma once
#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include "Hero.h"
#include "Spell.h"
#include "SpellBook.h"
using namespace std;

class Mage :public Hero {
private:
	int mana;
	int max_mana;
	spellBook book; // reaplce with SpellBook
	spell* currentSpell;
public:
	Mage(string name, int max_hp, int hp, int level, int mana, int max_mana, spellBook book):Hero(name, max_hp, hp, level) {
		this->mana = mana;
		this->max_mana = max_mana;
		this->book = book;
	}

	string getInfo() {

	}

	int getDamage() {
		castSpell();
		currentSpell->spellInfo();
		return currentSpell->makeDamage();
	}

	void receiveDamage(int damage) {
		
	}

	void levelUp() {

	}

	void castSpell() {
		currentSpell = book.getRandomSpell();
	}
};