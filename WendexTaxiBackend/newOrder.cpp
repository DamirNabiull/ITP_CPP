//
// Created by dale on 09.04.2021.
//

#include "newOrder.h"

newOrder::newOrder(Passenger &passenger, order ord) {
    this->passenger = &passenger;
    this->from = ord.from;
    this->to = ord.to;
    this->time = ord.time;
    this->price = ord.price;
    this->carType = carType;
}
