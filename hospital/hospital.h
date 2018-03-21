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

class Hospital {
public:
    enum Patient { ALL, IN, OUT, MALE, FEMALE };
    
    Hospital(char name[], int capcity) {
        hospitalName = name;
        patientCapacity = capcity;
        patients = new Patient[capcity];
        totalPatients = 0;
    };
    
    ~Hospital() {
        delete [] patients;
    }
    
    void readRecordsFile(char filename []);
    void display(int patientType);
    void admit(Patient p);
    
private:
    Patient * patients;
    int totalPatients;
    int patientCapacity;
    char * fileName;
    char * hospitalName;
    Patient determinePatientType(Patient p);
};

#endif /* hospital_h */
