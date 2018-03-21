//
//  maleout.h
//  hospital
//
//  Created by Renaldo Pierre-Louis on 3/21/18.
//  Copyright © 2018 Renaldo Pierre-Louis. All rights reserved.
//

#ifndef maleout_h
#define maleout_h

#include "male.h"
#include "outpatient.h"

class MaleOut : public Male, public Outpatient {
public:
    MaleOut() {};
};

#endif /* maleout_h */
