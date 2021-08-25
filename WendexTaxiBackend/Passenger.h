//
// Created by dale on 09.04.2021.
//

#ifndef HW4_PASSENGER_H
#define HW4_PASSENGER_H
#include "order.h"
#include <vector>
using namespace std;

enum payment{
    card,
    money
};

class Passenger{
protected:
    string name;
    double rating;
    vector<order> order_history;
    payment payment_method;
    vector<addresses> pinned_addresses;
    bool loggined;
    bool in_ride;
    bool blocked;
public:
    Passenger() = default;
    Passenger(string name, double rating, payment payment_method);
    Passenger(string name, double rating, vector<order> order_history, payment payment_method, vector<addresses> pinned_addresses);
    string getName();
    double getRating();
    vector<order> getOrderHistory();
    payment getPayment();
    vector<addresses> getPinned();
    bool isLoginned();
    void changeLoggined();
    bool isInRide();
    void changeInRide();
    void addOrder(order ord);
    void printHistory();
    void addPinned(addresses address);
    void deletePinned(addresses address);
    void printPinned();
    void printPayment();
    void changePayment(payment new_payment_method);
    void blockLogin();
    bool getBlocked();
};


#endif //HW4_PASSENGER_H
