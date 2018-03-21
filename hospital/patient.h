//
//  patient.h
//  hospital
//
//  Created by Renaldo Pierre-Louis on 3/18/18.
//  Copyright © 2018 Renaldo Pierre-Louis. All rights reserved.
//

#ifndef patient_h
#define patient_h

#include <string>

using namespace std;

class Patient {
public:
    Patient() {};
    Patient(string name, string spouseName, string diagnosis) : name(name), spouseName(spouseName), diagnosis(diagnosis) {};
    
    void parse();
    string toString();
    void enterPatientData();
    
protected:
    string name;
    string SSN;
    string insuranceName;
    string insuranceNumber;
    string age;
    string spouseName;
    string diagnosis;
};

#endif /* patient_hpp */
