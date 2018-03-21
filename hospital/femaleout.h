//
//  femaleout.hpp
//  hospital
//
//  Created by Renaldo Pierre-Louis on 3/21/18.
//  Copyright © 2018 Renaldo Pierre-Louis. All rights reserved.
//

#ifndef femaleout_h
#define femaleout_h

#include "female.h"
#include "outpatient.h"

class FemaleOut : public Female, public Outpatient {
public:
    FemaleOut() {};
};

#endif /* femaleout_h */
