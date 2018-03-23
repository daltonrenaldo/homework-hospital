//
//  patient.cpp
//  hospital
//
//  Created by Renaldo Pierre-Louis on 3/18/18.
//  Copyright © 2018 Renaldo Pierre-Louis. All rights reserved.
//

#include "patient.h"
#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

string Patient::toString() {
    return name + '\t' +
           spouseName + '\t' +
           getSex() + '\t' +
           getType() + '\t' +
           unitApptDate() + '\t' +
           diagnosis;
}

void Patient::print() {
    printField(name);
    printField(spouseName);
    printField(getSex());
    printField(getType());
    printField(unitApptDate());
    printField(diagnosis);
    cout << endl;
}

void Patient::printField(string field, int max) {
    cout << left << setw(max) << field;
}

void Patient::parse(string data) {
    string field;
    stringstream ss(data);
    for (int i = 0; i < 8; i++) {
        getline(ss, field, ',');
        if (i == 0) {
            name = field;
        } else if (i == 1) {
            SSN = field;
        } else if (i == 2) {
            insuranceName = field;
        } else if (i == 3) {
            insuranceNumber = field;
        } else if (i == 4) {
            age = field;
        } else if (i == 5) {
            spouseName = field;
        } else if (i == 6) {
            diagnosis = field;
        } else {
            // something else
        }
    }
}

// TODO: maybe some data validation
void Patient::enterPatientData() {
    cout << endl;

    cout << "1. Name:" << endl;
    cin >> name; cout << endl;

    cout << "2. Spouse Name:" << endl;
    cin >> spouseName; cout << endl;

    cout << "3. Age:" << endl;
    cin >> insuranceName; cout << endl;

    cout << "4. Diagnosis:" << endl;
    cin >> diagnosis; cout << endl;

    cout << "5. Social Security Number:" << endl;
    cin >> SSN; cout << endl;

    cout << "6. Insurance Name:" << endl;
    cin >> insuranceName; cout << endl;

    cout << "7. Insurance Number:" << endl;
    cin >> insuranceName; cout << endl;
}
