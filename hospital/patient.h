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

    void parse(string);
    void enterPatientData();
    string toString();
    void print();
    
    virtual string getType() const = 0;
    virtual string unitApptDate() const = 0;
    virtual string getSex() const = 0;
    
protected:
    string name;
    string SSN;
    string insuranceName;
    string insuranceNumber;
    string age;
    string spouseName;
    string diagnosis;
    void printField(string field, int max = 15);
};

#endif /* patient_hpp */
