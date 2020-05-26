#pragma once
#include <iostream>
#include <string>
#include "Name.h"
using namespace std;

class parcel {
private:
	double height;
	double width;
	double length;
	string post_stamp; // enum for
	int id;
	// name sender; // class for sender (name....)
	// name receiver;
	string sender;
	string receiver;
	double price;
	double mass;
	double distance;
	double volume;
public:
	parcel(string sender, string receiver, string post_stamp, double height, double width, double length) {
		id = rand() % 9000 + 1000;
		mass = rand() % 100 + 1;
		distance = rand() % 1000 + 50;
		price = getPrice();

		this->sender = sender;
		this->receiver = receiver;
		this->post_stamp = post_stamp;
		this->height = height;
		this->width = width;
		this->length = length;
		this->volume = getVolume("m3");
	}

	void getParcelInfo() {
		cout << "Sender: " << sender << endl;
		cout << "Receiver: " << receiver << endl;
		cout << "ID: " << id << endl;
		cout << "Height: " << height << "cm" << endl;
		cout << "Width: " << width << "cm" << endl;
		cout << "Length: " << length << "cm" << endl;
		cout << "Volume: " << volume << "m^3" << endl;
		cout << "Mass: " << mass << "kg" << endl;
		cout << "Distance: " << distance << "km" << endl;
		cout << "Price: $" << price << endl;
	}

	double getVolume(string dimention) {
		double figure = 0;
		if (dimention.compare("cm3") == 0) {
			figure = height * width * length;
		}
		else {
			height = height / 100;
			width = width / 100;
			length = length / 100;
			figure = height * width * length;
		}
		return figure;
	}

	double getPrice() {
		double price = 0;
		
		if (mass < 20)					    price = 15;
		else if (mass >= 20 && mass < 40)   price = 20;
		else if (mass >= 40 && mass < 60)   price = 25;
		else if (mass >= 60 && mass < 80)   price = 30;
		else if (mass >= 80 && mass <= 100) price = 35;
		
		return (distance / 10 * 5) + price;
	}
};