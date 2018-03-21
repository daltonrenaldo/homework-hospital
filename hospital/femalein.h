//
//  femalein.h
//  hospital
//
//  Created by Renaldo Pierre-Louis on 3/18/18.
//  Copyright © 2018 Renaldo Pierre-Louis. All rights reserved.
//

#ifndef femalein_h
#define femalein_h

#include "female.h"
#include "inpatient.h"

class FemaleIn : public Female, public Inpatient {
public:
    FemaleIn() {}
};

#endif /* femalein_h */
