//
// Created by dale on 06.03.2021.
//

#include "persons.h"
#include <string>
#include <iostream>

std::string persons::getAccess(){
    return this->Access;
}

std::string persons::getName() {
    return this->Name_Surname;
}

std::string persons::getDate() {
    return this->Date;
}

std::string persons::getPet() {
    return this->Pet;
}

std::string persons::getCabinet() {
    return this->cabinet;
}

void persons::open(rooms &room, bool &status) {
    bool t = true;
    for (auto i : this->accesed_rooms) {
        if (i == room.getName()) {
            t = false;
            break;
        }
    }
    if (!t || status) {
        std::cout << this->Name_Surname << " " << "opened the room \"" << room.getName() << "\"\n";
    }
    else if (this->Access == "Blue" && room.getName().at(0) == '1') {
            std::cout << this->Name_Surname << " " << "opened the room \"" << room.getName() << "\"\n";
    }
    else if (this->Access == "Red" or room.getAccessLevel() == "No level") {
        std::cout << this->Name_Surname << " " << "opened the room \"" << room.getName() << "\"\n";
    }
    else if (room.getAccessLevel() == "Special") {
        if (room.getName() == this->cabinet) {
            std::cout << this->Name_Surname << " " << "opened the room \"" << room.getName() << "\"\n";
        }
        else {
            std::cout << this->Name_Surname << " " << "has not access to the room \"" << room.getName() << "\"\n";
        }
    }
    else if (room.getAccessLevel() == "Yellow") {
        if (this->Access == "Yellow") {
            std::cout << this->Name_Surname << " " << "opened the room \"" << room.getName() << "\"\n";
        }
        else {
            std::cout << this->Name_Surname << " " << "has not access to the room \"" << room.getName() << "\"\n";
        }
    }
    else if (room.getAccessLevel() == "Green") {
        if (this->Access == "Yellow" or this->Access == "Green") {
            std::cout << this->Name_Surname << " " << "opened the room \"" << room.getName() << "\"\n";
        }
        else {
            std::cout << this->Name_Surname << " " << "has not access to the room \"" << room.getName() << "\"\n";
        }
    }
}

void persons::close(rooms &room) {
    if (this->Access == "Red" or room.getAccessLevel() == "No level") {
        std::cout << this->Name_Surname << " " << "closed the room \"" << room.getName() << "\"\n";
    }
    else if (room.getAccessLevel() == "Special") {
        if (room.getName() == this->cabinet) {
            std::cout << this->Name_Surname << " " << "closed the room \"" << room.getName() << "\"\n";
        }
        else {
            std::cout << this->Name_Surname << " " << "has not access to the room \"" << room.getName() << "\"\n";
        }
    }
    else if (room.getAccessLevel() == "Yellow") {
        if (this->Access == "Yellow") {
            std::cout << this->Name_Surname << " " << "closed the room \"" << room.getName() << "\"\n";
        }
        else {
            std::cout << this->Name_Surname << " " << "has not access to the room \"" << room.getName() << "\"\n";
        }
    }
    else if (room.getAccessLevel() == "Green") {
        if (this->Access == "Yellow" or this->Access == "Green") {
            std::cout << this->Name_Surname << " " << "closed the room \"" << room.getName() << "\"\n";
        }
        else {
            std::cout << this->Name_Surname << " " << "has not access to the room \"" << room.getName() << "\"\n";
        }
    }
}

void persons::setAccess(std::string Access) {
    this->Access = Access;
}

void persons::addRoom(std::string room_name) {
    this->accesed_rooms.push_back(room_name);
}


//***Student***

Student::Student(std::string &Name_Surname, std::string &Date, std::string &Pet) {
    this->Name_Surname = Name_Surname;
    this->Date = Date;
    this->Pet = Pet;
    this->Access = "No level";
    this->cabinet = "No cabinet";
}

//***Prof***

Professor::Professor(std::string &Name_Surname, std::string &cabinet, std::string &Date, std::string &Pet) {
    this->Name_Surname = Name_Surname;
    this->Date = Date;
    this->Pet = Pet;
    this->cabinet = cabinet;
    this->Access = "Yellow";
}

//***Lab***

LabEmployee::LabEmployee(std::string &Name_Surname, std::string &cabinet, std::string &Date, std::string &Pet) {
    this->Name_Surname = Name_Surname;
    this->Date = Date;
    this->Pet = Pet;
    this->cabinet = cabinet;
    this->Access = "Green";
}

//***Director***

Director::Director(std::string &Name_Surname, std::string &cabinet, std::string &Date, std::string &Pet) {
    this->Name_Surname = Name_Surname;
    this->Date = Date;
    this->Pet = Pet;
    this->cabinet = cabinet;
    this->Access = "Yellow";
}

//***Admin***

Admin::Admin(std::string &Name_Surname, std::string &cabinet, std::string &Date, std::string &Pet) {
    this->Name_Surname = Name_Surname;
    this->Date = Date;
    this->Pet = Pet;
    this->cabinet = cabinet;
    this->Access = "Red";
}

void Admin::changeAccess(persons &person, std::string &Access) {
    person.setAccess(Access);
    std::cout << this->Name_Surname << " changed access level of " << person.getName() << " to " << Access << "\n";
}

void Admin::giveAccesToRoom(persons &person, rooms &room) {
    person.addRoom(room.getName());
    std::cout << person.getName() << " got access to " << room.getName() << "\n";
}

Guest::Guest(std::string &Name_Surname, std::string &Date, std::string &Pet) {
    this->Name_Surname = Name_Surname;
    this->Date = Date;
    this->Pet = Pet;
    this->Access = "Blue";
    this->cabinet = "No cabinet";
}
