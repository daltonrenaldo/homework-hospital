//
//  inpatient.h
//  hospital
//
//  Created by Renaldo Pierre-Louis on 3/18/18.
//  Copyright © 2018 Renaldo Pierre-Louis. All rights reserved.
//

#ifndef inpatient_h
#define inpatient_h

#include "patient.h"

class Inpatient : virtual public Patient {
public:
    Inpatient() : Patient() {};
private:
    char * roomNumber;
};

#endif /* inpatient_h */
