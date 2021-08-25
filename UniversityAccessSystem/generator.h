//
// Created by dale on 06.03.2021.
//

#ifndef HW2_GENERATOR_H
#define HW2_GENERATOR_H
#include <iostream>
#include <string>
#include <vector>
#include "persons.h"
#include "rooms.h"
#include "generator.h"

class generator {
public:
    void generate_data(std::vector<Guest> &guests, std::vector<Student> &students, std::vector<LabEmployee> &labs, std::vector<Professor> &profs, std::vector<Director> &directors, std::vector<Admin> &admins, std::vector<rooms> &rooms_vector);
    void print_data(std::vector<Guest> &guests, std::vector<Student> &students, std::vector<LabEmployee> &labs, std::vector<Professor> &profs, std::vector<Director> &directors, std::vector<Admin> &admins, std::vector<rooms> &rooms_vector);
    void add_data(std::string &class_of_person, bool &t, std::string &Name, std::string &Surname, std::string &Name_Surname, std::string &cabinet, std::string &Date, std::string &Pet, std::string &password, std::string &Access, std::string &Room_Name, std::vector<Guest> &guests, std::vector<Student> &students, std::vector<LabEmployee> &labs, std::vector<Professor> &profs, std::vector<Director> &directors, std::vector<Admin> &admins, std::vector<rooms> &rooms_vector);
    void info_data(std::string &class_of_person, bool &t, std::string &Name, std::string &Surname, std::string &Name_Surname, std::vector<Guest> &guests, std::vector<Student> &students, std::vector<LabEmployee> &labs, std::vector<Professor> &profs, std::vector<Director> &directors, std::vector<Admin> &admins, std::vector<rooms> &rooms_vector);
    void change_data(std::string &class_of_person, bool &t, std::string &Name, std::string &Surname, std::string &Name_Surname, std::string &password, std::string &Access, std::vector<Guest> &guests, std::vector<Student> &students, std::vector<LabEmployee> &labs, std::vector<Professor> &profs, std::vector<Director> &directors, std::vector<Admin> &admins, std::vector<rooms> &rooms_vector);
    void add_room_data(std::string &class_of_person, bool &t, std::string &Name, std::string &Surname, std::string &Name_Surname, std::string &password, rooms &room, std::vector<Guest> &guests, std::vector<Student> &students, std::vector<LabEmployee> &labs, std::vector<Professor> &profs, std::vector<Director> &directors, std::vector<Admin> &admins, std::vector<rooms> &rooms_vector);
};


#endif //HW2_GENERATOR_H
