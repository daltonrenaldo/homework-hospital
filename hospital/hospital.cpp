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

void Hospital::display(int patientType) {
    cout << "===================" << endl;
    while(* hospitalName != '\0') {
        cout << *(hospitalName++);
    }
    cout << endl << "===================" << endl << endl;

    
}

void Hospital::admit(Patient p) {
    patients[totalPatients++] = p;
}
