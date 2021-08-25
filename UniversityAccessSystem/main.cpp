#include <iostream>
#include <string>
#include <vector>
#include "persons.h"
#include "rooms.h"
#include "generator.h"

using namespace std;

int main() {
    int j = 0;
    bool t, status = false;
    string Access;
    string Room_Name;
    string Name;
    string Surname;
    string Name_Surname;
    string Date;
    string Pet;
    string cabinet;
    string command = " ";
    string class_of_person = " ";
    string password = " ";

    vector<Student> students;
    vector<LabEmployee> labs;
    vector<Professor> profs;
    vector<Director> directors;
    vector<Admin> admins;
    vector<Guest> guests;
    vector<rooms> rooms_vector;

    generator Generator;
    Generator.generate_data(guests, students, labs, profs, directors, admins, rooms_vector);

    Generator.print_data(guests, students, labs, profs, directors, admins, rooms_vector);

    cout << "Example of changing level: \n    ";
    Access = "Green";
    admins[0].changeAccess(students[0], Access);
    cout << "\n";

    cout << "Example of adding access to any room: \n    ";
    admins[0].giveAccesToRoom(guests[0], rooms_vector[12]);
    cout << "\n";

    cout << "Examples of opening Emergency(off): \n    ";
    guests[0].open(rooms_vector[12], status);
    cout << "    ";
    students[0].open(rooms_vector[1], status);
    cout << "    ";
    students[1].open(rooms_vector[0], status);
    cout << "    ";
    directors[0].open(rooms_vector[7], status);
    cout << "    ";
    directors[0].open(rooms_vector[3], status);
    cout << "    ";
    guests[0].open(rooms_vector[3], status);
    cout << "    ";
    guests[0].open(rooms_vector[4], status);
    cout << "    ";
    guests[0].open(rooms_vector[5], status);
    cout << "    ";
    guests[0].open(rooms_vector[1], status);
    cout << "\n";

    cout << "Examples of opening with Emergency(on): \n";
    status = !status;
    cout << "Attention. Please go to the nearest exit!!!\n    ";
    guests[0].open(rooms_vector[12], status);
    cout << "    ";
    students[0].open(rooms_vector[1], status);
    cout << "    ";
    students[1].open(rooms_vector[0], status);
    cout << "    ";
    directors[0].open(rooms_vector[7], status);
    cout << "    ";
    directors[0].open(rooms_vector[3], status);
    cout << "    ";
    guests[0].open(rooms_vector[3], status);
    cout << "    ";
    guests[0].open(rooms_vector[4], status);
    cout << "    ";
    guests[0].open(rooms_vector[5], status);
    cout << "    ";
    guests[0].open(rooms_vector[1], status);
    status = !status;
    cout << "It is ok now, do not worry.\n";

    while (true) {
        command = " ";
        cout << "Print your command (List of commands with description in Readme.md)\n";
        cin >> command;
        if (command == "Exit") {
            cout << "Code finished";
            break;
        }
        else if (command == "Emergency") {
            if (!status) {
                cout << "Attention. Please go to the nearest exit!!!\n";
                status = !status;
            } else {
                cout << "It is ok now, do not worry.\n";
                status = !status;
            }
        }
        else if (command == "Add") {
            cout << "Class: ";
            cin >> class_of_person;
            Generator.add_data(class_of_person, t, Name, Surname, Name_Surname, cabinet, Date, Pet, password, Access, Room_Name, guests, students, labs, profs, directors, admins, rooms_vector);
        }
        else if (command == "Info") {
            cout << "Class: ";
            cin >> class_of_person;
            Generator.info_data(class_of_person, t, Name, Surname, Name_Surname, guests, students, labs, profs, directors, admins, rooms_vector);
        }
        else if (command == "List") {
            Generator.print_data(guests, students, labs, profs, directors, admins, rooms_vector);
        }
        else if (command == "Level") {
            cout << "Class: ";
            cin >> class_of_person;
            cout << "Access level: ";
            getline(cin, Access);
            getline(cin, Access);
            Generator.change_data(class_of_person, t, Name, Surname, Name_Surname, password, Access, guests, students, labs, profs, directors, admins, rooms_vector);
        }
        else if (command == "Room") {
            cout << "Class: ";
            cin >> class_of_person;
            cout << "Room(name): ";
            getline(cin, Room_Name);
            getline(cin, Room_Name);

            t = false;
            rooms *room = nullptr;
            for (auto &i : rooms_vector) {
                if (i.getName() == Room_Name) {
                    room = &i;
                    t = true;
                }
            }
            if (!t) {
                cout << "No room with this name\n";
            }

            if (t) {
                Generator.add_room_data(class_of_person, t, Name, Surname, Name_Surname, password, *room, guests, students, labs, profs, directors, admins, rooms_vector);
            }

        }
        else if (command == "Open") {
            cout << "Class: ";
            cin >> class_of_person;
            cout << "Name and Surname: ";
            cin >> Name >> Surname;
            Name_Surname = Name + " " + Surname;
            cout << "Room(name): ";
            getline(cin, Room_Name);
            getline(cin, Room_Name);

            t = false;
            rooms *room = nullptr;
            for (auto &i : rooms_vector) {
                if (i.getName() == Room_Name) {
                    room = &i;
                    t = true;
                }
            }
            if (!t) {
                cout << "No room with this name\n";
            }

            if (t && class_of_person == "Guest") {
                for (auto &i : guests) {
                    if (i.getName() == Name_Surname) {
                        i.open(*room, status);
                        t = false;
                    }
                }
            }

            if (t && class_of_person == "Student") {
                for (auto &i : students) {
                    if (i.getName() == Name_Surname) {
                        i.open(*room, status);
                        t = false;
                    }
                }
            }

            if (t && class_of_person == "Employee") {
                for (auto &i : labs) {
                    if (i.getName() == Name_Surname) {
                        i.open(*room, status);
                        t = false;
                    }
                }
            }

            if (t && class_of_person == "Professor") {
                for (auto &i : profs) {
                    if (i.getName() == Name_Surname) {
                        i.open(*room, status);
                        t = false;
                    }
                }
            }

            if (t && class_of_person == "Admin") {
                for (auto &i : admins) {
                    if (i.getName() == Name_Surname) {
                        i.open(*room, status);
                        t = false;
                    }
                }
            }

            if (t && class_of_person == "Director") {
                for (auto &i : directors) {
                    if (i.getName() == Name_Surname) {
                        i.open(*room, status);
                        t = false;
                    }
                }
            }

            if (t) {
                cout << "No person with this name\n";
            }
        }
    }
}
