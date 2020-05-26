#include <iostream>
#include <ctime>
#include <string>
#include "Parcel.h"
using namespace std;

int main() {
	srand(time(NULL));
	double h = rand() % 1000 + 1;
	double w = rand() % 1000 + 1;
	double l = rand() % 1000 + 1;
	parcel p1("HumanNames.csv", "HumanNames.csv", "Lviv", h, w, l);
	p1.getParcelInfo();
	return 0;
}