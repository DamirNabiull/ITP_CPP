//
// Created by dale on 09.04.2021.
//

#include "Passenger.h"


Passenger::Passenger(string name, double rating, payment payment_method) {
    this->in_ride = false;
    this->loggined = false;
    this->name = name;
    this->rating = rating;
    this->payment_method = payment_method;
    this->blocked = false;
}

Passenger::Passenger(string name, double rating, vector<order> order_history, payment payment_method, vector<addresses> pinned_addresses) {
    this->in_ride = false;
    this->loggined = false;
    this->name = name;
    this->rating = rating;
    this->order_history = order_history;
    this->payment_method = payment_method;
    this->pinned_addresses = pinned_addresses;
    this->blocked = false;
}

bool Passenger::isLoginned() {
    return this->loggined;
}

bool Passenger::isInRide() {
    return this->in_ride;
}

void Passenger::changeInRide() {
    this->in_ride = !(this->in_ride);
}

void Passenger::addOrder(order ord) {
    this->order_history.push_back(ord);
}

void Passenger::printHistory() {
    int k = 1;
    cout << "Order history:\n";
    for (auto i : order_history) {
        cout << "#" << k << ") ";
        i.printOrder();
        k++;
    }
    cout << "\n";
}

void Passenger::addPinned(addresses address) {
    this->pinned_addresses.push_back(address);
}

void Passenger::changeLoggined() {
    this->loggined = true;
}

void Passenger::printPayment() {
    cout << "Payment:\n";
    if (this->payment_method == card) {
        cout << "Card\n\n";
    } else if (this->payment_method == money) {
        cout << "Money\n\n";
    }
}

void Passenger::changePayment(payment new_payment_method) {
    this->payment_method = new_payment_method;
}

void Passenger::deletePinned(addresses address) {
    vector<addresses> new_addresses;
    for (auto i : this->pinned_addresses) {
        if (i != address) {
            new_addresses.push_back(i);
        }
    }
    this->pinned_addresses = new_addresses;
}

void Passenger::printPinned() {
    cout << "Pined addresses:\n";
    for (auto i : this->pinned_addresses) {
        if (i == pyaterochka) {
            cout << "Pyaterochka\n";
        }
        if (i == bar) {
            cout << "Bar\n";
        }
        if (i == magnit) {
            cout << "Magnit\n";
        }
        if (i == university) {
            cout << "University\n";
        }
        if (i == dorms) {
            cout << "Dorms\n";
        }
        if (i == lyceum) {
            cout << "Lyceum\n";
        }
        if (i == zionchik) {
            cout << "Zionchik\n";
        }
    }
    cout << "\n";
}

string Passenger::getName() {
    return this->name;
}

double Passenger::getRating() {
    return this->rating;
}

vector<order> Passenger::getOrderHistory() {
    return this->order_history;
}

payment Passenger::getPayment() {
    return this->payment_method;
}

vector<addresses> Passenger::getPinned() {
    return this->pinned_addresses;
}

void Passenger::blockLogin() {
    this->blocked = true;
}

bool Passenger::getBlocked() {
    return this->blocked;
}


