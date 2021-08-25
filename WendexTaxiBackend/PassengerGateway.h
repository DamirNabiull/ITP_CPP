//
// Created by dale on 09.04.2021.
//

#ifndef HW4_PASSENGERGATEWAY_H
#define HW4_PASSENGERGATEWAY_H
#include "Gateway.h"
using namespace std;

class PassengerGateway {
protected:
    vector<Passenger*> *passengers;
    Gateway *gateway;
public:
    PassengerGateway(vector<Passenger*> &passengers1, Gateway &gateway);
    void login(Passenger &passenger);
    void orderHistory(Passenger &passenger);
    void seePayment(Passenger &passenger);
    void changePayment(Passenger &passenger, payment payment_method);
    void seePined(Passenger &passenger);
    void addPined(Passenger &passenger, addresses address);
    void removePined(Passenger &passenger, addresses address);
    order checkRide(Passenger &passenger, addresses from, addresses to, type carType);
    void orderRide(Passenger &passenger, order ord);
    void orderRide(Passenger &passenger, order ord, payment paymentMethod);
    void currentCoordinates(Passenger &passenger);
    void saveData();
};


#endif //HW4_PASSENGERGATEWAY_H
