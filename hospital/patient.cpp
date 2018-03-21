//
//  patient.cpp
//  hospital
//
//  Created by Renaldo Pierre-Louis on 3/18/18.
//  Copyright © 2018 Renaldo Pierre-Louis. All rights reserved.
//

#include "patient.h"
#include <iostream>

using namespace std;

// returns all patients into into as a comma separated string
string Patient::toString() {
    return name + "," + spouseName + "," + diagnosis;
}

// TODO: maybe some data validation
void Patient::enterPatientData() {
    cout << endl;
    
    cout << "1. Firstname and lastname:" << endl;
    cin >> name; cout << endl;
    
    cout << "2. Social Security Number" << endl;
    cin >> SSN; cout << endl;
    
    cout << "3. Insurance Name:" << endl;
    cin >> insuranceName; cout << endl;
    
    cout << "4. Spouse Name:" << endl;
    cin >> spouseName; cout << endl;
}
