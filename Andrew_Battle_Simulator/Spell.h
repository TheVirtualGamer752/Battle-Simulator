#pragma once
#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
using namespace std;

class spell {
private:
	int damage;
	string spellName;
	int mana;
	int req_level;
	string affect;
public:
	spell(int damage, string spellName, int mana, int req_level, string affect) {
		this->damage = damage;
		this->spellName = spellName;
		this->mana = mana;
		this->req_level = req_level;
		this->affect = affect;
	}

	spell() {
		damage = 100;
		mana = 50;
		req_level = 20;
	}

	void spellInfo() {
		cout << "Spell : "<<spellName;
		cout << " Damage : " << damage;
		cout << " Mana : "<< mana;
		cout << " Required Level : " << req_level;
		cout << " Affect : " << affect;
	}

	int makeDamage() {
		return damage;
	}

	int getMana() {
		return mana;
	}

	int getReq_level() {
		return req_level;
	}

	string makeAffect() {
		return affect;
	}
};

