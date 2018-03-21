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
    cout << endl;
    cout << "===================" << endl;
    cout << hospitalName          << endl;
    cout << "===================" << endl << endl;
    
    for(int i = 0; i < totalPatients; i++) {
        cout << patients[i].toString() << endl;
    }
    cout << endl;
}

void Hospital::admit(Patient & p) {
    patients[totalPatients++] = p;
    cout << endl << typeid((p)).name() << endl;
}
