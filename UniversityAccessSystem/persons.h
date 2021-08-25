//
// Created by dale on 06.03.2021.
//

#ifndef HW2_PERSONS_H
#define HW2_PERSONS_H
#include <string>
#include <vector>
#include "rooms.h"

class persons {
protected:
    std::string Access;
    std::string Name_Surname;
    std::string Date;
    std::string Pet;
    std::string cabinet;
    std::vector<std::string> accesed_rooms;
public:
    std::string getAccess();
    std::string getName();
    std::string getDate();
    std::string getPet();
    std::string getCabinet();
    void open(rooms &room, bool &status);
    void close(rooms &room);
    void setAccess(std::string Access);
    void addRoom(std::string room_name);
};

class Guest: public persons{
public:
    Guest(std::string &Name_Surname, std::string &Date, std::string &Pet);
};

class Student: public persons{
public:
    Student(std::string &Name_Surname, std::string &Date, std::string &Pet);
};

class Professor: public persons{
public:
    Professor(std::string &Name_Surname, std::string &cabinet, std::string &Date, std::string &Pet);
};

class LabEmployee: public persons{
public:
    LabEmployee(std::string &Name_Surname, std::string &cabinet, std::string &Date, std::string &Pet);
};

class Director: public persons{
public:
    Director(std::string &Name_Surname, std::string &cabinet, std::string &Date, std::string &Pet);
};

class Admin: public persons{
public:
    Admin(std::string &Name_Surname, std::string &cabinet, std::string &Date, std::string &Pet);
    void changeAccess(persons &person, std::string &Access);
    void giveAccesToRoom(persons &person, rooms &room);
};

#endif //HW2_PERSONS_H
