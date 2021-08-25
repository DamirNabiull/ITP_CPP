//
// Created by dale on 09.04.2021.
//

#include "DriverGateway.h"

DriverGateway::DriverGateway(vector<Driver*> &drivers, Gateway &gateway) {
    this->drivers = &drivers;
    this->gateway = &gateway;
}

void DriverGateway::login(Driver &driver) {
    if (!driver.getBlocked()) {
        driver.changeLoggined();
    } else {
        cout << "You are blocked by admin. You can't login\n\n";
    }

}

void DriverGateway::orderHistory(Driver &driver) {
    if (driver.isLoginned()) {
        driver.printHistory();
    }
    else {
        cout << "Driver is not loggined\n\n";
    }
}

void DriverGateway::seeCar(Driver &driver) {
    if (driver.isLoginned()) {
        driver.seeCar();
    }
    else {
        cout << "Driver is not loggined\n\n";
    }
}

void DriverGateway::updateStatus(Driver &driver) {
    if (driver.isLoginned() && !driver.isInRide()) {
        driver.changeStatus();
    }
    else {
        cout << "Driver is not loggined or driver in ride\n\n";
    }
}

order DriverGateway::checkAvailableOrder(Driver &driver) {
    order ord;
    if (driver.isLoginned() && driver.isWorking() && !(driver.isInRide()) && driver.isValidated()) {
        ord = this->gateway->checkAvailableOrder(driver);
    } else {
        if (!driver.isValidated()) {
            cout << "Driver's car wasn't validated by admin\n\n";
        } else {
            cout << "Driver is not loggined, working or driver in ride\n\n";
        }
    }
    return ord;
}

void DriverGateway::accept(Driver &driver, order ord) {
    if (driver.isLoginned() && driver.isWorking() && !(driver.isInRide() && driver.isValidated())) {
        this->gateway->deleteOrder(driver, ord);
    } else {
        if (!driver.isValidated()) {
            cout << "Driver's car wasn't validated by admin\n\n";
        } else {
            cout << "Driver is not loggined, working or driver in ride\n\n";
        }
    }
}

void DriverGateway::decline(Driver &driver, order ord) {
    driver.num_of_order++;
}

void DriverGateway::endRide(Driver &driver) {
    if (driver.isLoginned() && driver.isWorking() && driver.isInRide()) {
        this->gateway->endRide(driver, driver.returnNowOrder());
    }
}

void DriverGateway::saveData() {
    this->gateway->saveDrivers(this->drivers);
}













