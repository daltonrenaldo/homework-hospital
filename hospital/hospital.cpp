//
//  hospital.cpp
//  hospital
//
//  Created by Renaldo Pierre-Louis on 3/18/18.
//  Copyright © 2018 Renaldo Pierre-Louis. All rights reserved.
//

#include <iostream>
#include "hospital.h"

using namespace std;

void Hospital::display() {
    header();
    for(int i = 0; i < totalPatients; i++) {
        cout << patients[i]->toString() << endl;
    }
    cout << endl;
}

void Hospital::display(string type) {
    header();
    
    for(int i=0; i < totalPatients; i++) {
        Patient * p = patients[i];
        string pType = determinePatientType(p);
        
        if (pType.compare(type) == 0) {
            cout << p->toString() << endl;
        }
    }
}

void Hospital::admit(Patient * p) {
    patients[totalPatients++] = p;
}

void Hospital::header() {
    cout << endl;
    cout << "===================" << endl;
    cout << hospitalName          << endl;
    cout << "===================" << endl << endl;
}

string Hospital::determinePatientType(Patient * p) {
    return p->getType();
}
