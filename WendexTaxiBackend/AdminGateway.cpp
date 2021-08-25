//
// Created by dale on 25.04.2021.
//

#include "AdminGateway.h"

void AdminGateway::blockLogin(Admin &admin, Passenger &passenger) {
    if (admin.isLoginned()) {
        passenger.blockLogin();
    } else {
        cout << "Admin is not loggined\n\n";
    }

}

void AdminGateway::blockLogin(Admin &admin, Driver &driver) {
    if (admin.isLoginned()) {
        driver.blockLogin();
    } else {
        cout << "Admin is not loggined\n\n";
    }
}

AdminGateway::AdminGateway(Gateway &gateway) {
    this->gateway = &gateway;
}

void AdminGateway::seeInfo(Admin &admin, Passenger &passenger) {
    if (admin.isLoginned()) {
        cout << "Info about given passenger:\n********************************\n";
        cout << passenger.getName() << " " << passenger.getRating() << "\n";
        passenger.printPayment();
        passenger.printPinned();
        passenger.printHistory();
        cout << "********************************\n\n";
    } else {
        cout << "Admin is not loggined\n\n";
    }
}

void AdminGateway::seeInfo(Admin &admin, Driver &driver) {
    if (admin.isLoginned()) {
        cout << "Info about given driver:\n********************************\n";
        cout << driver.getName() << " " << driver.getRating() << "\n";
        driver.seeCar();
        driver.printHistory();
        cout << "********************************\n\n";
    } else {
        cout << "Admin is not loggined\n\n";
    }
}

void AdminGateway::validateCar(Admin &admin, Driver &driver, bool t) {
    if (admin.isLoginned()) {
        driver.changeValidated(t);
    } else {
        cout << "Admin is not loggined\n\n";
    }
}

void AdminGateway::login(Admin &admin) {
    admin.changeLoggined();
    this->gateway->saveAdmins();
}


