//
// Created by dale on 09.04.2021.
//

#include "order.h"

order::order(addresses from, addresses to, type carType) {
    this->from = from;
    this->to = to;
    this->time = rand() % 40 + 10;
    this->carType = carType;
    if (carType == economy) {
        this->price = (rand()%10 + 1) * this->time;
    }
    if (carType == comfort) {
        this->price = (rand()%10 + 11) * this->time;
    }
    if (carType == comfortPlus) {
        this->price = (rand()%10 + 21) * this->time;
    }
    if (carType == business) {
        this->price = (rand()%10 + 31) * this->time;
    }
}

void order::printOrder() {
    cout << "Order details: \n";
    if (this->from == pyaterochka) {
        cout << "From: Pyaterochka ";
    }
    else if (this->from == bar) {
        cout << "From: Bar ";
    }
    else if (this->from == magnit) {
        cout << "From: Magnit ";
    }
    else if (this->from == university) {
        cout << "From: University ";
    }
    else if (this->from == dorms) {
        cout << "From: Dorms ";
    }
    else if (this->from == lyceum) {
        cout << "From: Lyceum ";
    }
    else if (this->from == zionchik) {
        cout << "From: Zionchik ";
    }


    if (this->to == pyaterochka) {
        cout << "To: Pyaterochka ";
    }
    else if (this->to == bar) {
        cout << "To: Bar ";
    }
    else if (this->to == magnit) {
        cout << "To: Magnit ";
    }
    else if (this->to == university) {
        cout << "To: University ";
    }
    else if (this->to == dorms) {
        cout << "To: Dorms ";
    }
    else if (this->to == lyceum) {
        cout << "To: Lyceum ";
    }
    else if (this->to == zionchik) {
        cout << "To: Zionchik ";
    }

    cout << "CarType: ";
    if (this->carType == economy) {
        cout << "Economy ";
    }
    else if (this->carType == comfort) {
        cout << "Comfort ";
    }
    else if (this->carType == comfortPlus) {
        cout << "ComfortPlus ";
    }
    else if (this->carType == business) {
        cout << "Business ";
    }

    cout << "Time: " << this->time << "-minutes Price: " << this->price << "\n\n";
}

bool order::operator==(const order &rhs) const {
    return from == rhs.from &&
           to == rhs.to &&
           price == rhs.price &&
           time == rhs.time &&
           carType == rhs.carType;
}

bool order::operator!=(const order &rhs) const {
    return !(rhs == *this);
}

string order::getFrom() {
    if (this->from == pyaterochka) {
        return "Pyaterochka";
    }
    else if (this->from == bar) {
        return "Bar";
    }
    else if (this->from == magnit) {
        return "Magnit";
    }
    else if (this->from == university) {
        return "University";
    }
    else if (this->from == dorms) {
        return "Dorms";
    }
    else if (this->from == lyceum) {
        return "Lyceum";
    }
    else if (this->from == zionchik) {
        return "Zionchik";
    }
}

string order::getTo() {
    if (this->to == pyaterochka) {
        return "Pyaterochka";
    }
    else if (this->to == bar) {
        return "Bar";
    }
    else if (this->to == magnit) {
        return "Magnit";
    }
    else if (this->to == university) {
        return "University";
    }
    else if (this->to == dorms) {
        return "Dorms";
    }
    else if (this->to == lyceum) {
        return "Lyceum";
    }
    else if (this->to == zionchik) {
        return "Zionchik";
    }
}

string order::getCarType() {
    if (this->carType == economy) {
        return "Economy";
    }
    else if (this->carType == comfort) {
        return "Comfort";
    }
    else if (this->carType == comfortPlus) {
        return "ComfortPlus";
    }
    else if (this->carType == business) {
        return "Business";
    }
}
