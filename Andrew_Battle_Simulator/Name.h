#pragma once
#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include <fstream>
using namespace std;

class name {
private:
	string names[200];
public:
	name(string filename) {
		ReadDataFrom_HumanNames_File(filename);
	}

	void ReadDataFrom_HumanNames_File(string path) {
        string line;
        ifstream myfile(path);
        if (myfile.is_open()) {
            for (int i = 0; getline(myfile, line); i++) {
                names[i] = line;
            }
            myfile.close();
        }
        else cout << "Unable to open file";
	}

    string generateName() {
        int index = rand() % 200;
        return names[index];
    }
};