//
// Created by dale on 09.04.2021.
//

#ifndef HW4_GATEWAY_H
#define HW4_GATEWAY_H
#include "Driver.h"
#include "newOrder.h"
#include "order.h"
#include <fstream>
#include "Admin.h"
using namespace std;

class Gateway {
private:
    vector<order> ords;
    vector<newOrder> newOrds;
    vector<Passenger*> *passengers;
    vector<Driver*> *drivers;
    vector<Admin*> *admins;
    vector<Passenger> savedPassengers;
    vector<Driver> savedDrivers;
    vector<Admin> savedAdmins;
public:
    Gateway(vector<Passenger*> *passengers, vector<Driver*> *drivers, vector<Admin*> *admins);
    void savePassengers(vector<Passenger*> *passengers);
    void saveDrivers(vector<Driver*> *drivers);
    void saveAdmins();
    void createOrder(Passenger &passenger, order ord);
    order checkAvailableOrder(Driver &driver);
    void deleteOrder(Driver &driver, order ord);
    void endRide(Driver &driver, newOrder ord);
    vector<Passenger> getSavedPassengers();
    vector<Driver> getSavedDrivers();
    vector<Admin> getSavedAdmins();
};


#endif //HW4_GATEWAY_H
