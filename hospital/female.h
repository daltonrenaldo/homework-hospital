//
//  female.h
//  hospital
//
//  Created by Renaldo Pierre-Louis on 3/18/18.
//  Copyright © 2018 Renaldo Pierre-Louis. All rights reserved.
//

#ifndef female_h
#define female_h

#include "patient.h"
#include <string>

class Female : virtual public Patient {
public:
    Female() : sex("F"), Patient() {}
    string getSex() const;
private:
    string sex;
};

#endif /* female_h */
