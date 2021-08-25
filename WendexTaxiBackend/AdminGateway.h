//
// Created by dale on 25.04.2021.
//

#ifndef HW4_ADMINGATEWAY_H
#define HW4_ADMINGATEWAY_H

#include "Gateway.h"

class AdminGateway {
protected:
    Gateway *gateway;
public:
    AdminGateway(Gateway &gateway);
    void seeInfo(Admin &admin, Passenger &passenger);
    void seeInfo(Admin &admin, Driver &driver);
    void blockLogin(Admin &admin, Passenger &passenger);
    void blockLogin(Admin &admin, Driver &driver);
    void validateCar(Admin &admin, Driver &driver, bool t);
    void login(Admin &admin);
};


#endif //HW4_ADMINGATEWAY_H
