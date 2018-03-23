//
//  hospital.cpp
//  hospital
//
//  Created by Renaldo Pierre-Louis on 3/18/18.
//  Copyright © 2018 Renaldo Pierre-Louis. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include "hospital.h"

using namespace std;

void Hospital::display() {
    header();
    for(int i = 0; i < totalPatients; i++) {
        patients[i]->print();
    }
    cout << endl;
}

void Hospital::display(string type) {
    header();

    for(int i=0; i < totalPatients; i++) {
        Patient * p = patients[i];
        string pType = determinePatientType(p);

        if (pType.compare(type) == 0) {
            p->print();
        }
    }
}

void Hospital::admit(Patient * p) {
    patients[totalPatients++] = p;
}

void Hospital::header() {
    cout << endl;
    cout << "--------------------------------------------------------------------------------------------" << endl;
    cout << "Hospital: " << hospitalName << endl;
    cout << "Patient Capacity: " << patientCapacity << endl;
    cout << "Total Patients: " << totalPatients << '\t' << "Available Beds: " << patientCapacity - totalPatients << endl;
    cout << endl;
    cout << left << setw(15) << "Name"
         << left << setw(15) << "Spouse"
         << left << setw(15) << "Sex"
         << left << setw(15) << "Patient Type"
         << left << setw(15) << "Unit/Apt. Date"
         << left << setw(15) << "Diagnosis" << endl;

    cout << "--------------------------------------------------------------------------------------------" << endl;
}

string Hospital::determinePatientType(Patient * p) {
    return p->getType();
}
