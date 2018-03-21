//
//  patient.cpp
//  hospital
//
//  Created by Renaldo Pierre-Louis on 3/18/18.
//  Copyright © 2018 Renaldo Pierre-Louis. All rights reserved.
//

#include "patient.h"
#include <iostream>

using namespace std;

void Patient::toString() {
    cout << name << " " << spouseName << " " << diagnosis << endl;
}
