#pragma once
#include <iostream>
#include <string>
using namespace std;

class parcel {
private:
	double height;
	double width;
	double length; 
	string post_stamp; // enum for 
	int id;
	string sender; // class for sender (name....)
	string receiver;
	double price;
	double weight;
	double distance;
public:
	parcel(string sender, string receiver, string post_stamp, double height, double width, double length) {
		id = rand() % 9000 + 1000;
		weight = rand() % 100 + 1;
		distance = rand() % 1000 + 50;
		price = getPrice();
		this->sender = sender;
		this->receiver = receiver;
		this->post_stamp = post_stamp;
		this->height = height;
		this->width = width;
		this->length = length;
	}

	void getParcelInfo() {
		cout << "Sender: " << sender << endl;
		cout << "Receiver: " << receiver << endl;
		cout << "ID: " << id << endl;
		cout << "Height: " << height << "cm" << endl;
		cout << "Width: " << width << "cm" << endl;
		cout << "Length: " << length << "cm" << endl;
	}

	double getVolume() {
		return 0;
	}

	double getPrice() {
		return 0;
	}
};