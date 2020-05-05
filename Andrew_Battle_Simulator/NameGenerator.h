#pragma once
#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include <fstream>
using namespace std;

class NameGenerator {
private:
    string names[100];
public:
    NameGenerator(string fileName) {
        readDataFromFile(fileName);
    }

    void readDataFromFile(string path) {
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
        int index = rand() % 100;
        return names[index];
    }
};

//if (myfile.is_open()) {
//    int index = 0;
//    while (getline(myfile, line)) { //EOF
//        names[index] = line;
//        index++;
//    }
//    myfile.close();
//}

//for (int i = 0; i < 100; i++) {
//    cout << names[i] << endl;
//}

// main "sdfasdf.cvs" -> constructor filename -> readData path