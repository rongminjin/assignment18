//
//  customer.cpp
//  a16w
//
//  Created by Rongmin Jin on 3/28/19.
//  Copyright © 2019 Rongmin Jin. All rights reserved.
//

#include "Header.h"
#include "customer.hpp"


customer::customer() {
    arrivalTime = 0;
    serviceBeginTime = 0;
    serviceEndTime = 0;
    serviceTime = 0;
    totalServiceTime = 0;
}


bool operator<(const customer &s1, const customer &s2){
    return s1.getTotalServiceTime() < s2.getTotalServiceTime();
}


