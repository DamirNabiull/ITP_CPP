//
// Created by dale on 09.04.2021.
//

#ifndef HW4_NEWORDER_H
#define HW4_NEWORDER_H
#include <iostream>
#include <string>
#include "Car.h"
#include "Passenger.h"
using namespace std;

class newOrder {
public:
    addresses from;
    addresses to;
    double price;
    double time;
    type carType;
    Passenger *passenger;
    newOrder(Passenger &passenger, order ord);
    newOrder() = default;
};


#endif //HW4_NEWORDER_H
