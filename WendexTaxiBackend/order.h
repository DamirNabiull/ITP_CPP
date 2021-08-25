//
// Created by dale on 09.04.2021.
//

#ifndef HW4_ORDER_H
#define HW4_ORDER_H
#include <iostream>
#include <string>
#include "Car.h"
using namespace std;

enum addresses{
    pyaterochka,
    bar,
    magnit,
    university,
    dorms,
    lyceum,
    zionchik
};

class order {
public:
    addresses from;
    addresses to;
    double price;
    double time;
    type carType;
    order(addresses from, addresses to, type carType);
    order() = default;
    void printOrder();

    string getFrom();
    string getTo();
    string getCarType();

    bool operator==(const order &rhs) const;

    bool operator!=(const order &rhs) const;
};


#endif //HW4_ORDER_H
