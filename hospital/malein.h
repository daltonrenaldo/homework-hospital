//
//  malein.hpp
//  hospital
//
//  Created by Renaldo Pierre-Louis on 3/18/18.
//  Copyright © 2018 Renaldo Pierre-Louis. All rights reserved.
//

#ifndef malein_h
#define malein_h

#include "male.h"
#include "inpatient.h"

class MaleIn : public Male, public Inpatient {
public:
    MaleIn() : Male(), Inpatient(), Patient()  {};
    MaleIn(char * name, char * spouse, char * diagnosis) : Male(), Inpatient(), Patient(name, spouse, diagnosis) {};
};

#endif /* malein_h */
