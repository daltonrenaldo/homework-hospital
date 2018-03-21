//
//  patient.h
//  hospital
//
//  Created by Renaldo Pierre-Louis on 3/18/18.
//  Copyright © 2018 Renaldo Pierre-Louis. All rights reserved.
//

#ifndef patient_h
#define patient_h

class Patient {
public:
    Patient() {};
    Patient(char name[], char spouseName[], char diagnosis[]) : name(name), spouseName(spouseName), diagnosis(diagnosis) {};
    
    void parse();
    void toString();
    void enterPatientData();
    
protected:
    char * name;
    char * SSN;
    char * insuranceName;
    char * insuranceNumber;
    char * age;
    char * spouseName;
    char * diagnosis;
};

#endif /* patient_hpp */
