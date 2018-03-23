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
#include <string>

class Inpatient : virtual public Patient {
public:
    static const string TYPE;

    Inpatient() : Patient() {};

    string getType() const { return TYPE; };
    string unitApptDate() const { return roomNumber; };
    void setRoomNumber(string number) { roomNumber = number; };
private:
    string roomNumber;
};

#endif /* inpatient_h */
