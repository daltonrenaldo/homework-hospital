//
//  male.h
//  hospital
//
//  Created by Renaldo Pierre-Louis on 3/18/18.
//  Copyright © 2018 Renaldo Pierre-Louis. All rights reserved.
//

#ifndef male_h
#define male_h

#include "patient.h"
#include <string>

class Male : virtual public Patient {
public:
    Male() : sex("M"), Patient() {};
    string getSex() const;
private:
    string sex;
};

#endif /* male_h */
