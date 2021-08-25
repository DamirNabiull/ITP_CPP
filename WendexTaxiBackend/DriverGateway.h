//
// Created by dale on 09.04.2021.
//

#ifndef HW4_DRIVERGATEWAY_H
#define HW4_DRIVERGATEWAY_H
#include "Gateway.h"
using namespace std;

class DriverGateway {
protected:
    vector<Driver*> *drivers;
    Gateway *gateway;
public:
    DriverGateway(vector<Driver*> &drivers, Gateway &gateway);
    void login(Driver &driver);
    void orderHistory(Driver &driver);
    void seeCar(Driver &driver);
    void updateStatus(Driver &driver);
    order checkAvailableOrder(Driver &driver);
    void accept(Driver &driver, order ord);
    void decline(Driver &driver, order ord);
    void endRide(Driver &driver);
    void saveData();
};


#endif //HW4_DRIVERGATEWAY_H
