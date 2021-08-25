//
// Created by dale on 09.04.2021.
//

#include "Driver.h"

Driver::Driver(string name, double rating, Car &car) {
    this->loggined = false;
    this->in_ride = false;
    this->working = false;
    this->name = name;
    this->rating = rating;
    this->cars.push_back(car);
    this->car = car;
    this->num_of_order = 0;
    this->validated = false;
    this->blocked = false;
}

Driver::Driver(string name, double rating, vector<order> order_history, Car &car) {
    this->loggined = false;
    this->in_ride = false;
    this->working = false;
    this->name = name;
    this->rating = rating;
    this->cars.push_back(car);
    this->car = car;
    this->order_history = order_history;
    this->num_of_order = 0;
    this->cars.push_back(car);
    this->validated = false;
    this->blocked = false;
}



bool Driver::isLoginned() {
    return this->loggined;
}

void Driver::changeLoggined() {
    this->loggined = true;
}

bool Driver::isInRide() {
    return this->in_ride;
}

void Driver::changeInRide() {
    this->in_ride = !(this->in_ride);
}

bool Driver::isWorking() {
    return this->working;
}

void Driver::changeStatus() {
    this->working = !(this->working);
}

void Driver::addOrder(order ord) {
    this->order_history.push_back(ord);
}

void Driver::printHistory() {
    int k = 1;
    cout << "Order history:\n";
    for (auto i : order_history) {
        cout << "#" << k << ") ";
        i.printOrder();
        k++;
    }
    cout << "\n";
}

void Driver::seeCar() {
    for (auto i : this->cars) {
        i.printInfo();
    }
}

void Driver::startOrder(newOrder &ord) {
    this->changeInRide();
    this->nowOrder = ord;
}

type Driver::driverCarType() {
    return this->car.carCarType();
}

void Driver::changeWater() {
    this->car.changeAndPrintNumberOfWater();
}

newOrder Driver::returnNowOrder() {
    return this->nowOrder;
}

string Driver::getName() {
    return this->name;
}

double Driver::getRating() {
    return this->rating;
}

vector<order> Driver::getOrderHistory() {
    return this->order_history;
}

string Driver::carModel() {
    return this->car.getModel();
}

string Driver::carColor() {
    return this->car.getColor();
}

string Driver::carNumber() {
    return this->car.getNumber();
}

Driver::Driver(string name, double rating, vector<order> order_history, vector<Car> &cars) {
    this->loggined = false;
    this->in_ride = false;
    this->working = false;
    this->name = name;
    this->rating = rating;
    this->cars = cars;
    this->car = cars[0];
    this->order_history = order_history;
    this->num_of_order = 0;
    this->validated = false;
    this->blocked = false;
}

void Driver::changeValidated(bool t) {
    this->validated = t;
}

bool Driver::isValidated() {
    return this->validated;
}

void Driver::blockLogin() {
    this->blocked = true;
}

bool Driver::getBlocked() {
    return this->blocked;
}

Driver::Driver(string name, double rating, vector<Car> &cars) {
    this->loggined = false;
    this->in_ride = false;
    this->working = false;
    this->name = name;
    this->rating = rating;
    this->cars = cars;
    this->car = cars[0];
    this->num_of_order = 0;
    this->validated = false;
    this->blocked = false;
}

vector<Car> Driver::getCars() {
    return this->cars;
}

