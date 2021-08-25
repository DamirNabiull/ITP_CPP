//
// Created by dale on 09.04.2021.
//

#include "Gateway.h"

void Gateway::saveDrivers(vector<Driver*> *drivers) {
    vector<order> ord;
    vector<Car> cars;
    fstream ofs;
    ofs.open("drivers.txt", ios::out | ios::trunc);
    ofs << this->drivers->size() + this->savedDrivers.size() << "\n";

    for (auto & i : this->savedDrivers) {
        ofs << "Name:\n" << i.getName() << "\n";
        ofs << "Orders:\n";
        ord = i.getOrderHistory();
        for (auto & j : ord) {
            ofs << j.getFrom() << "\n";
            ofs << j.getTo() << "\n";
            ofs << j.getCarType() << "\n";
            ofs << j.time << "\n";
            ofs << j.price << "\n";
        }

        cars = i.getCars();
        ofs << "Car:\n" << cars.size() << "\n";
        for (auto j : cars) {
            ofs << j.getModel() << "\n";
            if (j.carCarType()==economy) {
                ofs << "Economy\n";
            } else if (j.carCarType()==comfort) {
                ofs << "Comfort\n";
            } else if (j.carCarType()==comfortPlus) {
                ofs << "ComfortPlus\n";
            } else if (j.carCarType()==business) {
                ofs << "Business\n";
            }
            ofs <<j.getColor() << "\n" << j.getNumber() << "\n";
        }

        ofs << "Rating:\n";
        ofs << i.getRating() << "\n";
    }

    for (auto & i : *this->drivers) {
        ofs << "Name:\n" << i->getName() << "\n";
        ofs << "Orders:\n";
        ord = i->getOrderHistory();
        for (auto & j : ord) {
            ofs << j.getFrom() << "\n";
            ofs << j.getTo() << "\n";
            ofs << j.getCarType() << "\n";
            ofs << j.time << "\n";
            ofs << j.price << "\n";
        }
        cars = i->getCars();
        ofs << "Car:\n" << cars.size() << "\n";
        for (auto j : cars) {
            ofs << j.getModel() << "\n";
            if (j.carCarType()==economy) {
                ofs << "Economy\n";
            } else if (j.carCarType()==comfort) {
                ofs << "Comfort\n";
            } else if (j.carCarType()==comfortPlus) {
                ofs << "ComfortPlus\n";
            } else if (j.carCarType()==business) {
                ofs << "Business\n";
            }
            ofs <<j.getColor() << "\n" << j.getNumber() << "\n";
        }
        ofs << "Rating:\n";
        ofs << i->getRating() << "\n";
    }
    ofs.close();
}

void Gateway::savePassengers(vector<Passenger*> *pass) {
    vector<order> ord;
    vector<addresses> adr;
    fstream ofs;
    ofs.open("passengers.txt", ios::out | ios::trunc);
    ofs << this->passengers->size() + this->savedPassengers.size() << "\n";

    for (auto & i : this->savedPassengers) {
        ofs << "Name:\n" << i.getName() << "\n";
        ofs << "Orders:\n";
        ord = i.getOrderHistory();
        for (auto & j : ord) {
            ofs << j.getFrom() << "\n";
            ofs << j.getTo() << "\n";
            ofs << j.getCarType() << "\n";
            ofs << j.time << "\n";
            ofs << j.price << "\n";
        }
        ofs << "Pinned:\n";
        adr = i.getPinned();
        for (auto & j : adr) {
            if (j == pyaterochka) {
                ofs << "Pyaterochka\n";
            }
            else if (j == bar) {
                ofs << "Bar\n";
            }
            else if (j == magnit) {
                ofs << "Magnit\n";
            }
            else if (j == university) {
                ofs << "University\n";
            }
            else if (j == dorms) {
                ofs << "Dorms\n";
            }
            else if (j == lyceum) {
                ofs << "Lyceum\n";
            }
            else if (j == zionchik) {
                ofs << "Zionchik\n";
            }
        }
        ofs << "Payment:\n";
        if (i.getPayment() == card) {
            ofs << "Card\n";
        } else {
            ofs << "Money\n";
        }
        ofs << "Rating:\n";
        ofs << i.getRating() << "\n";
    }

    for (auto & i : *this->passengers) {
        ofs << "Name:\n" << i->getName() << "\n";
        ofs << "Orders:\n";
        ord = i->getOrderHistory();
        for (auto & j : ord) {
            ofs << j.getFrom() << "\n";
            ofs << j.getTo() << "\n";
            ofs << j.getCarType() << "\n";
            ofs << j.time << "\n";
            ofs << j.price << "\n";
        }
        ofs << "Pinned:\n";
        adr = i->getPinned();
        for (auto & j : adr) {
            if (j == pyaterochka) {
                ofs << "Pyaterochka\n";
            }
            else if (j == bar) {
                ofs << "Bar\n";
            }
            else if (j == magnit) {
                ofs << "Magnit\n";
            }
            else if (j == university) {
                ofs << "University\n";
            }
            else if (j == dorms) {
                ofs << "Dorms\n";
            }
            else if (j == lyceum) {
                ofs << "Lyceum\n";
            }
            else if (j == zionchik) {
                ofs << "Zionchik\n";
            }
        }
        ofs << "Payment:\n";
        if (i->getPayment() == card) {
            ofs << "Card\n";
        } else {
            ofs << "Money\n";
        }
        ofs << "Rating:\n";
        ofs << i->getRating() << "\n";
    }
    ofs.close();
}

void Gateway::createOrder(Passenger &passenger, order ord) {
    this->ords.push_back(ord);
    this->newOrds.push_back(newOrder(passenger, ord));
}

void Gateway::deleteOrder(Driver &driver, order ord) {
    bool t = false;
    driver.addOrder(ord);
    vector<order> tempOrd;
    vector<newOrder> tempNewOrd;
    for (int i = 0; i < this->ords.size(); i++) {
        if (this->ords[i] != ord) {
            tempOrd.push_back(this->ords[i]);
            tempNewOrd.push_back(this->newOrds[i]);
        } else {
            t = true;
            driver.startOrder(this->newOrds[i]);
            this->newOrds[i].passenger->changeInRide();
            this->newOrds[i].passenger->addOrder(ord);
            break;
        }
    }
    if (!t) {
        cout << "Sorry, but somebody took this order\n\n";
    }
    this->ords = tempOrd;
    this->newOrds = tempNewOrd;
}

order Gateway::checkAvailableOrder(Driver &driver) {
    int k = 0;
    for (int i = 0; i < this->ords.size(); i++) {
        if (driver.driverCarType() == this->ords[i].carType && driver.num_of_order == k) {
            ords[i].printOrder();
            return this->ords[i];
        } else if (driver.driverCarType() == this->ords[i].carType) {
            k++;
        }
    }
    cout << "No more available orders\n\n";
    driver.num_of_order = 0;
    return {};
}

void Gateway::endRide(Driver &driver, newOrder ord) {
    driver.changeInRide();
    driver.changeWater();
    driver.num_of_order = 0;
    ord.passenger->changeInRide();
    savePassengers(this->passengers);
    saveDrivers(this->drivers);
    cout << "Ride ended. If you want to bill for this ride, you can make it by real money in real life\n\n";
}

Gateway::Gateway(vector<Passenger *> *pass, vector<Driver *> *drive, vector<Admin*> *admins) {
    this->savedPassengers = getSavedPassengers();
    this->savedDrivers = getSavedDrivers();
    this->savedAdmins = getSavedAdmins();
    this->passengers = pass;
    this->drivers = drive;
    this->admins = admins;
}

vector<Passenger> Gateway::getSavedPassengers() {
    fstream ofs;
    ofs.open("passengers.txt", ios::in);
    int k = 0;
    double price, time, rating;
    addresses f, t;
    type carT;
    payment p;
    string s, from, to, carType, name;
    vector<Passenger> tempPassengers;
    vector<addresses> pinedAddresses;
    ofs >> k;
    getline(ofs, s);
    for (int i = 0; i < k; i++) {
        getline(ofs, s);
        getline(ofs, name);
        getline(ofs, s);
        vector<order> tempOrds;
        getline(ofs, from);
        while (from != "Pinned:") {
            getline(ofs, to);
            getline(ofs, carType);
            ofs >> time;
            ofs >> price;

            if (from == "Pyaterochka") {
                f = pyaterochka;
            }
            else if (from == "Bar") {
                f = bar;
            }
            else if (from == "Magnit") {
                f = magnit;
            }
            else if (from == "University") {
                f = university;
            }
            else if (from == "Dorms") {
                f = dorms;
            }
            else if (from == "Lyceum") {
                f = lyceum;
            }
            else if (from == "Zionchik") {
                f = zionchik;
            }

            if (to == "Pyaterochka") {
                t = pyaterochka;
            }
            else if (to == "Bar") {
                t = bar;
            }
            else if (to == "Magnit") {
                t = magnit;
            }
            else if (to == "University") {
                t = university;
            }
            else if (to == "Dorms") {
                t = dorms;
            }
            else if (to == "Lyceum") {
                t = lyceum;
            }
            else if (to == "Zionchik") {
                t = zionchik;
            }

            if (carType == "Economy") {
                carT = economy;
            }
            else if (carType == "Comfort") {
                carT = comfort;
            }
            else if (carType == "ComfortPlus") {
                carT = comfortPlus;
            }
            else if (carType == "Business") {
                carT = business;
            }
            order tempOrd(f, t, carT);
            tempOrd.price = price;
            tempOrd.time = time;
            tempOrds.push_back(tempOrd);
            getline(ofs, s);
            getline(ofs, from);
        }
        getline(ofs, from);
        while (from != "Payment:") {
            if (from == "Pyaterochka") {
                f = pyaterochka;
            }
            else if (from == "Bar") {
                f = bar;
            }
            else if (from == "Magnit") {
                f = magnit;
            }
            else if (from == "University") {
                f = university;
            }
            else if (from == "Dorms") {
                f = dorms;
            }
            else if (from == "Lyceum") {
                f = lyceum;
            }
            else if (from == "Zionchik") {
                f = zionchik;
            }
            pinedAddresses.push_back(f);
            getline(ofs, from);
        }
        getline(ofs, s);
        if (s == "Card") {
            p = card;
        } else {
            p = money;
        }
        getline(ofs, s);
        ofs >> rating;
        getline(ofs, s);
        Passenger pas(name, rating, tempOrds, p, pinedAddresses);
        tempPassengers.push_back(pas);
    }
    ofs.close();
    return tempPassengers;
}

vector<Driver> Gateway::getSavedDrivers() {
    fstream ofs;
    ofs.open("drivers.txt", ios::in);
    int k = 0, n = 0;
    double price, time, rating;
    addresses f, t;
    type carT;
    payment p;
    string s, from, to, carType, name, model, color, number;
    vector<Driver> tempDriver;
    ofs >> k;
    getline(ofs, s);
    for (int i = 0; i < k; i++) {
        getline(ofs, s);
        getline(ofs, name);
        getline(ofs, s);
        vector<order> tempOrds;
        getline(ofs, from);
        while (from != "Car:") {
            getline(ofs, to);
            getline(ofs, carType);
            ofs >> time;
            ofs >> price;

            if (from == "Pyaterochka") {
                f = pyaterochka;
            } else if (from == "Bar") {
                f = bar;
            } else if (from == "Magnit") {
                f = magnit;
            } else if (from == "University") {
                f = university;
            } else if (from == "Dorms") {
                f = dorms;
            } else if (from == "Lyceum") {
                f = lyceum;
            } else if (from == "Zionchik") {
                f = zionchik;
            }

            if (to == "Pyaterochka") {
                t = pyaterochka;
            } else if (to == "Bar") {
                t = bar;
            } else if (to == "Magnit") {
                t = magnit;
            } else if (to == "University") {
                t = university;
            } else if (to == "Dorms") {
                t = dorms;
            } else if (to == "Lyceum") {
                t = lyceum;
            } else if (to == "Zionchik") {
                t = zionchik;
            }

            if (carType == "Economy") {
                carT = economy;
            } else if (carType == "Comfort") {
                carT = comfort;
            } else if (carType == "ComfortPlus") {
                carT = comfortPlus;
            } else if (carType == "Business") {
                carT = business;
            }
            order tempOrd(f, t, carT);
            tempOrd.price = price;
            tempOrd.time = time;
            tempOrds.push_back(tempOrd);
            getline(ofs, s);
            getline(ofs, from);
        }
        ofs >> n;
        getline(ofs, s);
        vector<Car> tempCars;
        for (int j = 0; j < n; j++) {
            getline(ofs, model);
            getline(ofs, carType);
            if (carType == "Economy") {
                carT = economy;
            }
            else if (carType == "Comfort") {
                carT = comfort;
            }
            else if (carType == "ComfortPlus") {
                carT = comfortPlus;
            }
            else if (carType == "Business") {
                carT = business;
            }
            getline(ofs, color);
            getline(ofs, number);
            Car tempCar(model, carT, color, number);
            tempCars.push_back(tempCar);
        }
        getline(ofs, s);
        ofs >> rating;
        getline(ofs, s);
        Driver newD(name, rating, tempOrds, tempCars);
        tempDriver.push_back(newD);
    }
    ofs.close();
    return tempDriver;
}

void Gateway::saveAdmins() {
    fstream ofs;
    ofs.open("admins.txt", ios::out | ios::trunc);
    ofs << this->admins->size() + this->savedAdmins.size() << "\n";
    for (auto & admin : *this->admins) {
        ofs << admin->getName() << "\n";
    }
    for (auto & admin : this->savedAdmins) {
        ofs << admin.getName() << "\n";
    }
}

vector<Admin> Gateway::getSavedAdmins() {
    vector<Admin> tempSavedAdmins;
    fstream ofs;
    ofs.open("admins.txt", ios::in);
    int k = 0;
    string s;
    ofs >> k;
    getline(ofs, s);
    for (int i = 0; i < k; i++) {
        getline(ofs, s);
        Admin tempAdmin(s);
        tempSavedAdmins.push_back(tempAdmin);
    }
    return tempSavedAdmins;
}
