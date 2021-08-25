//
// Created by dale on 25.04.2021.
//

#include "Admin.h"

Admin::Admin(string name) {
    this->name = name;
    this->loggined = false;
}

string Admin::getName() {
    return this->name;
}

bool Admin::isLoginned() {
    return this->loggined;
}

void Admin::changeLoggined() {
    this->loggined = true;
}
