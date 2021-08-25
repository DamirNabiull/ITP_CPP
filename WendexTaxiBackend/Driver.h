//
// Created by dale on 09.04.2021.
//

#ifndef HW4_DRIVER_H
#define HW4_DRIVER_H
#include "order.h"
#include "newOrder.h"
#include <vector>
using namespace std;


class Driver{
protected:
    string name;
    double rating;
    vector<order> order_history;
    Car car;
    vector<Car> cars;
    bool loggined;
    bool in_ride;
    bool working;
    newOrder nowOrder;
    bool validated;
    bool blocked;
public:
    int num_of_order;
    Driver(string name, double rating, Car &car);
    Driver(string name, double rating, vector<Car> &cars);
    Driver(string name, double rating, vector<order> order_history, Car &car);
    Driver(string name, double rating, vector<order> order_history, vector<Car> &cars);
    string getName();
    double getRating();
    vector<order> getOrderHistory();
    bool isLoginned();
    void changeLoggined();
    bool isInRide();
    void changeInRide();
    bool isWorking();
    void changeStatus();
    void addOrder(order ord);
    void printHistory();
    void seeCar();
    void startOrder(newOrder &ord);
    newOrder returnNowOrder();
    string carModel();
    type driverCarType();
    string carColor();
    string carNumber();
    void changeWater();
    void changeValidated(bool t);
    bool isValidated();
    void blockLogin();
    bool getBlocked();
    vector<Car> getCars();
};


#endif //HW4_DRIVER_H
