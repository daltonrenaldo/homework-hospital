//
//  main.cpp
//  hospital
//
//  Created by Renaldo Pierre-Louis on 3/18/18.
//  Copyright © 2018 Renaldo Pierre-Louis. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "hospital.h"
#include "patient.h"
#include "malein.h"
#include "femalein.h"
#include "maleout.h"
#include "femaleout.h"

using namespace std;

char HOSPITAL_NAME[] = {'G', 'E', 'N', 'E', 'R', 'A', 'L', ' ', 'H', 'O', 'S', 'P', 'I', 'T', 'A', 'L', '\0'};

Hospital generalHospital(HOSPITAL_NAME, 500);

void handleAddingPatient() {
    int opt;
    cout << "Choose the Patient Type" << endl;
    cout << "1. Male InPatient" << endl;
    cout << "2. Female InPatient" << endl;
    cout << "3. Male OutPatient" << endl;
    cout << "4. Female OutPatient" << endl;
    cout << "5. <- Back to main menu" << endl;
    
    cin >> opt;
    
    if (opt == 5) return;
    
    Patient * patient;
    
    switch (opt) {
        case 1: {
            patient = new MaleIn();
            break;
        }
        case 2: {
            patient = new FemaleIn();
            break;
        }
        case 3: {
            patient = new MaleOut();
            break;
        }
        case 4: {
            patient = new FemaleOut();
            break;
        }
        default:
            exit(0);
            break;
    }
    
    patient->enterPatientData();
    generalHospital.admit(patient);
}

void handleLoadingPatients() {
    int count = 0;
    ifstream infile("patient_records.in");
    string line;
    Patient * patient;
    
    while(getline(infile, line)) {
        int mod = count % 4;
        if (mod == 0) {
            patient = new MaleIn();
        } else if (mod == 1) {
            patient = new FemaleIn();
        } else if (mod == 2) {
            patient = new MaleOut();
        } else {
            patient = new FemaleOut();
        }
        
        patient->parse(line);
        generalHospital.admit(patient);
        count++;
    }
    infile.close();
}

void handleMenuChoice(int choice) {
    switch (choice) {
        case 0:
            handleLoadingPatients();
            break;
        case 1:
            handleAddingPatient();
            break;
        case 2:
            generalHospital.display();
            break;
        case 3:
            generalHospital.display(Outpatient::TYPE);
            break;
        case 4:
            generalHospital.display(Inpatient::TYPE);
        case 5:
        default:
            break;
    }
}

void displayMenu() {
    cout << "Pick an Option:" << endl << endl;
    cout << "0. Load Patients" << endl;
    cout << "1. Add a Patient" << endl;
    cout << "2. Display All Patients" << endl;
    cout << "3. Display All OutPatients" << endl;
    cout << "4. Display All InPatients" << endl;
    cout << "5. Exit" << endl << endl;
}

int main(int argc, const char * argv[]) {
    int choice;
    do {
        displayMenu();
        cin >> choice;
        handleMenuChoice(choice);
    } while(choice != 5);

    return 0;
}
