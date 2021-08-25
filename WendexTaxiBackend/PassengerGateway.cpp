//
// Created by dale on 09.04.2021.
//

#include "PassengerGateway.h"

PassengerGateway::PassengerGateway(vector<Passenger*> &passengers1, Gateway &gateway) {
    this->passengers = &passengers1;
    this->gateway = &gateway;
}

void PassengerGateway::login(Passenger &passenger) {
    if (!passenger.getBlocked()) {
        passenger.changeLoggined();
    } else {
        cout << "You are blocked by admin. You can't login\n\n";
    }
}

void PassengerGateway::orderHistory(Passenger &passenger) {
    if (passenger.isLoginned()) {
        passenger.printHistory();
    }
    else {
        cout << "Passenger is not loggined\n\n";
    }
}

void PassengerGateway::seePayment(Passenger &passenger) {
    if (passenger.isLoginned()) {
        passenger.printPayment();
    }
    else {
        cout << "Passenger is not loggined\n\n";
    }
}

void PassengerGateway::changePayment(Passenger &passenger, payment payment_method) {
    if (passenger.isLoginned()) {
        passenger.changePayment(payment_method);
        this->saveData();
    }
    else {
        cout << "Passenger is not loggined\n\n";
    }
}

void PassengerGateway::seePined(Passenger &passenger) {
    if (passenger.isLoginned()) {
        passenger.printPinned();
    }
    else {
        cout << "Passenger is not loggined\n\n";
    }
}

void PassengerGateway::addPined(Passenger &passenger, addresses address) {
    if (passenger.isLoginned()) {
        passenger.addPinned(address);
    }
    else {
        cout << "Passenger is not loggined\n\n";
    }
    this->saveData();
}

void PassengerGateway::removePined(Passenger &passenger, addresses address) {
    if (passenger.isLoginned()) {
        passenger.deletePinned(address);
    }
    else {
        cout << "Passenger is not loggined\n\n";
    }
    this->saveData();
}

order PassengerGateway::checkRide(Passenger &passenger, addresses from, addresses to, type carType) {
    order ord(from, to, carType);
    if (passenger.isLoginned() && !(passenger.isInRide())) {
        ord.printOrder();
    } else {
        cout << "Passenger is not loggined or in ride\n\n";
    }
    return ord;
}

void PassengerGateway::orderRide(Passenger &passenger, order ord) {
    if (passenger.isLoginned() && !(passenger.isInRide())) {
        gateway->createOrder(passenger, ord);
        cout << "Order created with standard payment method\n\n";
    } else {
        cout << "Passenger is not loggined or in ride\n\n";
    }
}

void PassengerGateway::currentCoordinates(Passenger &passenger) {
    if (passenger.isLoginned() && passenger.isInRide()) {
        cout << "Current coordinates: " << (double)(rand()%100 + 1) << " " << (double)(rand()%100 + 1) << "\n\n";
    } else {
        cout << "Passenger is not loggined or still that moment nobody accepted his ride\n\n";
    }
}

void PassengerGateway::saveData() {
    this->gateway->savePassengers(this->passengers);
}

void PassengerGateway::orderRide(Passenger &passenger, order ord, payment paymentMethod) {
    if (passenger.isLoginned() && !(passenger.isInRide())) {
        gateway->createOrder(passenger, ord);
        cout << "Order created with given payment method\n\n";
    } else {
        cout << "Passenger is not loggined or in ride\n\n";
    }
}





























