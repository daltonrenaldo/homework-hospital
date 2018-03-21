//
//  outpatient.h
//  hospital
//
//  Created by Renaldo Pierre-Louis on 3/18/18.
//  Copyright © 2018 Renaldo Pierre-Louis. All rights reserved.
//

#ifndef outpatient_h
#define outpatient_h

#include "patient.h"

class Outpatient : virtual public Patient {
public:
    Outpatient() : Patient() {};
private:
    char * appointmentDate;
};

#endif /* outpatient_hpp */
