//
//  hospital.h
//  hospital
//
//  Created by Renaldo Pierre-Louis on 3/18/18.
//  Copyright © 2018 Renaldo Pierre-Louis. All rights reserved.
//

#ifndef hospital_h
#define hospital_h

#include "patient.h"
#include <string>

class Hospital {
public:
    enum PatientType { ALL, IN, OUT, MALE, FEMALE };
    
    Hospital(char name[], int capacity) {
        hospitalName = name;
        patientCapacity = capacity;
        patients = new Patient[capacity];
        totalPatients = 0;
    };
    
    ~Hospital() {
        delete [] patients;
    }
    
    void readRecordsFile(char filename []);
    void display();
    void admit(Patient & p);
    
private:
    Patient * patients;
    int totalPatients;
    int patientCapacity;
    char * fileName;
    char * hospitalName;
    void header();
    string determinePatientType(Patient * p);
    
};

#endif /* hospital_h */
