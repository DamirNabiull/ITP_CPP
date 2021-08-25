//
// Created by dale on 06.03.2021.
//

#include "rooms.h"
#include <string>


rooms::rooms(std::string &Access, std::string &Name) {
    this->Access = Access;
    this->Name = Name;
}

std::string rooms::getAccessLevel() {
    return this->Access;
}

std::string rooms::getName() {
    return this->Name;
}


