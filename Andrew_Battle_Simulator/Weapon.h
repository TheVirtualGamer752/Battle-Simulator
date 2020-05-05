#pragma once
#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
using namespace std;

class weapon {
private:
	int damage;
	string weaponName;
	int mass;
	int strength;
	int req_level;
public:
	weapon(int damage, string weaponName, int mass, int strength, int req_level) {
		this->damage = damage;
		this->weaponName = weaponName;
		this->mass = mass;
		this->strength = strength;
		this->req_level = req_level;
	}

	weapon() {
		damage = 100;
		mass = 50;
		strength = 75;
		req_level = 20;
	}

	void weaponInfo() {
		cout << "Weapon : " << weaponName;
		cout << " Damage : " << damage;
		cout << " Mass : " << mass;
		cout << " Strength : " << strength;
		cout << " Required Level : " << req_level;
	}

	int receiveDamage() {
		return damage;
	}

	int getMass() {
		return mass;
	}

	int receiveStrength() {
		return strength;
	}

	int getReq_level() {
		return req_level;
	}
};