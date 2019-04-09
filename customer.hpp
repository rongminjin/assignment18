//
//  customer.hpp
//  a16w
//
//  Created by Rongmin Jin on 3/28/19.
//  Copyright © 2019 Rongmin Jin. All rights reserved.
//

#ifndef customer_hpp
#define customer_hpp

#include <stdio.h>
using namespace std;


class customer {
private:
    int arrivalTime;
    int serviceBeginTime;
    int serviceEndTime;
    int serviceTime;
    int totalServiceTime;

public:
    customer();

    int getArrivalTime() const {
        return arrivalTime;
    }

    int getServiceBeginTime() const {
        return serviceBeginTime;
    }

    int getServiceEndTime() const {
        return serviceEndTime;
    }

    int getServiceTime() const {
        return serviceTime;
    }

    int getTotalServiceTime() const {
        return totalServiceTime;
    }

    void setArrivalTime(int arrivalTime) {
        customer::arrivalTime = arrivalTime;
    }

    void setServiceBeginTime(int serviceBeginTime) {
        customer::serviceBeginTime = serviceBeginTime;
    }

    void setServiceEndTime(int serviceEndTime) {
        customer::serviceEndTime = serviceEndTime;
    }

    void setServiceTime(int serviceTime) {
        customer::serviceTime = serviceTime;
    }

    void setTotalServiceTime(int totalServiceTime) {
        customer::totalServiceTime = totalServiceTime;
    }
};

#endif /* customer_hpp */
