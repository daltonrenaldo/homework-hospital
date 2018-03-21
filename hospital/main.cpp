//
//  main.cpp
//  hospital
//
//  Created by Renaldo Pierre-Louis on 3/18/18.
//  Copyright © 2018 Renaldo Pierre-Louis. All rights reserved.
//

#include <iostream>
#include "patient.h"
#include "malein.h"
#include "femalein.h"
#include "hospital.h"

using namespace std;

char HOSPITAL_NAME[] = {'M', 'Y', ' ', 'H', 'O', 'S', 'P', 'I', 'T', 'A', 'L'};
Hospital generalHospital(HOSPITAL_NAME, 500);

void handleAddingPatient() {
    int opt;
    cout << "Choose the Patient Type" << endl;
    cout << "1. Male InPatient" << endl;
    cout << "2. Female InPatient" << endl;
    cout << "3. Male OutPatient" << endl;
    cout << "4. Female OutPatient" << endl;
    cout << "5. Exit" << endl;
    
    cin >> opt;
    
    if (opt == 5) return;
    
    Patient patient;
    
    switch (opt) {
        case 1: {
            MaleIn malepatient;
            patient = malepatient;
            break;
        }
        case 2: {
            FemaleIn femalepatient;
            patient = femalepatient;
            break;
        }
        case 3:
        case 4:
        default:
            exit(0);
            break;
    }
    
    patient.enterPatientData();
    generalHospital.admit(&patient);
}

void handleMenuChoice(int choice) {
    switch (choice) {
        case 1:
            handleAddingPatient();
            break;
        case 2:
            break;
        case 3:
        case 4:
        case 5:
        default:
            break;
    }
}

void displayMenu() {
    cout << "Pick an Option:" << endl;
    cout << "1. Add a Patient" << endl;
    cout << "2. Display All Patients" << endl;
    cout << "3. Display All OutPatients" << endl;
    cout << "4. Display All InPatients" << endl;
    cout << "5. Exit" << endl;;
}

int main(int argc, const char * argv[]) {
    int choice;
    displayMenu();
    cin >> choice;
    handleMenuChoice(choice);
    
    return 0;
}
