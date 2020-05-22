#include <iostream>
#include <ctime>
#include <string>
#include "Parcel.h"
using namespace std;

int main() {
	srand(time(NULL));
	parcel p1("Andrey", "Nazar", "Lviv", 30, 10, 50);
	p1.getParcelInfo();
	return 0;
}