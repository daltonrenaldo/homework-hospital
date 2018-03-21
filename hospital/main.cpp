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
Hospital general(HOSPITAL_NAME, 500);

//Patient createInPatient(int type) {
//    char * name, ssn, insuranceName, insuranceNumber, age, spouseName, diagnosis;
//    cout << "What is the Patient's Name?" << endl;
//    cin >> name;
//    
//    if (type == 1) {
////        MaleIn patient();
////        return patient;
//    } else {
////        FemaleIn patient();
////        return patient;
//    }
//}

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
    
    switch (opt) {
        case 1:
        case 2:
            
            break;
        case 3:
        case 4:
        case 5:
        default:
            break;
    }
}

void handleMenuChoice(int choice) {
    switch (choice) {
        case 1:
            
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

int main(int argc, const char * argv[]) {
    char name[] = {'R', 'e', 'n'};
    Patient * patients;
    patients = new Patient[4];

    MaleIn malepatient(name, name, name);
    malepatient.toString();
    patients[0] = malepatient;

//    for(int i=0; i < 4; i++) {
//        patients[i].toString();
//    }
//    int opt;
//    general.display(Hospital::IN);
    
//    cout << "Pick an Option:" << endl;
//    cout << "1. Add a Patient" << endl;
//    cout << "2. Display All Patients" << endl;
//    cout << "3. Display All OutPatients" << endl;
//    cout << "4. Display All InPatients" << endl;
//    cout << "5. Exit" << endl;;
//
//    cin >> opt;
    
//    handleMenuChoice(opt);
    
    return 0;
}
