//
// Created by dale on 06.03.2021.
//
#include <iostream>
#include <string>
#include <vector>
#include "persons.h"
#include "rooms.h"
#include "generator.h"

using namespace std;

void generator::generate_data(vector<Guest> &guests, vector<Student> &students, vector<LabEmployee> &labs, vector<Professor> &profs, vector<Director> &directors, vector<Admin> &admins, vector<rooms> &rooms_vector){
    string Access;
    string Room_Name;
    string Name_Surname;
    string Date;
    string Pet;
    string cabinet;
    Access = "No level";
    Room_Name = "Class room";
    rooms class_room(Access, Room_Name);
    rooms_vector.push_back(class_room);

    Access = "Green";
    Room_Name = "108 - Lecture room";
    rooms lecture_room108(Access, Room_Name);
    rooms_vector.push_back(lecture_room108);

    Access = "Green";
    Room_Name = "107 - Lecture room";
    rooms lecture_room107(Access, Room_Name);
    rooms_vector.push_back(lecture_room107);

    Access = "Yellow";
    Room_Name = "111 - Conference room";
    rooms conference_room111(Access, Room_Name);
    rooms_vector.push_back(conference_room111);

    Access = "Yellow";
    Room_Name = "211 - Conference room";
    rooms conference_room211(Access, Room_Name);
    rooms_vector.push_back(conference_room211);

    Access = "Special";
    Room_Name = "Alexander Tormasov's cabinet";
    rooms director_room(Access, Room_Name);
    rooms_vector.push_back(director_room);

    Access = "Special";
    Room_Name = "Robo Lab";
    rooms Robo_Lab(Access, Room_Name);
    rooms_vector.push_back(Robo_Lab);

    Access = "Special";
    Room_Name = "GameDev Lab";
    rooms GameDev_Lab(Access, Room_Name);
    rooms_vector.push_back(GameDev_Lab);

    Name_Surname = "Posetitel Guestovich";
    Date = "02.09.2002";
    Pet = "No pet";
    Guest g1(Name_Surname, Date, Pet);
    guests.push_back(g1);

    Name_Surname = "Damir Nabiullin";
    Date = "02.09.2002";
    Pet = "No pet";
    Student s1(Name_Surname, Date, Pet);
    students.push_back(s1);

    Name_Surname = "Dinar Shamsutdinov";
    Date = "01.08.2002";
    Pet = "Dog";
    Student s2(Name_Surname, Date, Pet);
    students.push_back(s2);

    Name_Surname = "Ann Dluzhinskaya";
    Date = "22.09.2002";
    Pet = "Unicorn";
    Student s3(Name_Surname, Date, Pet);
    students.push_back(s3);

    Name_Surname = "Lev Kozlov";
    Date = "23.10.2002";
    Pet = "Cat";
    Student s4(Name_Surname, Date, Pet);
    students.push_back(s4);

    Name_Surname = "Alex Strijnev";
    Date = "11.05.2002";
    Pet = "No pet";
    Student s5(Name_Surname, Date, Pet);
    students.push_back(s5);

    Name_Surname = "Egor Vlasov";
    Date = "04.10.2002";
    Pet = "Dog";
    Student s6(Name_Surname, Date, Pet);
    students.push_back(s6);

    Name_Surname = "Vadim Makarov";
    Date = "05.10.2002";
    Pet = "Frog";
    Student s7(Name_Surname, Date, Pet);
    students.push_back(s7);

    Name_Surname = "Renata Shakirova";
    Date = "13.11.2002";
    Pet = "Lion";
    Student s8(Name_Surname, Date, Pet);
    students.push_back(s8);

    Name_Surname = "Zamira Kholmatova";
    Date = "04.10.2000";
    Pet = "No pet";
    Student s9(Name_Surname, Date, Pet);
    students.push_back(s9);

    Name_Surname = "Danil Usmanov";
    Date = "14.01.2000";
    Pet = "Dog";
    Student s10(Name_Surname, Date, Pet);
    students.push_back(s10);

    Name_Surname = "Daler Zakirov";
    Date = "17.02.2002";
    Pet = "No pet";
    Student s11(Name_Surname, Date, Pet);
    students.push_back(s11);

    Name_Surname = "Ruslan Gilvanov";
    Date = "16.12.2002";
    Pet = "No pet";
    Student s12(Name_Surname, Date, Pet);
    students.push_back(s12);

    Name_Surname = "Egor Osokin";
    Date = "21.10.2000";
    Pet = "No pet";
    Student s13(Name_Surname, Date, Pet);
    students.push_back(s13);

    Name_Surname = "Roman Voronov";
    Date = "14.01.2002";
    Pet = "No pet";
    Student s14(Name_Surname, Date, Pet);
    students.push_back(s14);

    Name_Surname = "Artem Usmanov";
    Date = "14.01.2002";
    Pet = "No pet";
    Student s15(Name_Surname, Date, Pet);
    students.push_back(s15);

    Name_Surname = "Alina Paukova";
    Date = "24.08.2000";
    Pet = "No pet";
    Student s16(Name_Surname, Date, Pet);
    students.push_back(s16);

    Name_Surname = "Nikolai Adminovich";
    Date = "29.02.2020";
    Pet = "Unicorn";
    cabinet = "510";
    Admin a1(Name_Surname, cabinet, Date, Pet);
    admins.push_back(a1);
    Access = "Special";
    Room_Name = "510";
    rooms room_510(Access, Room_Name);
    rooms_vector.push_back(room_510);

    Name_Surname = "Alexander Adminovich";
    Date = "29.02.2020";
    Pet = "Unicorn";
    cabinet = "511";
    Admin a2(Name_Surname, cabinet, Date, Pet);
    admins.push_back(a2);
    Access = "Special";
    Room_Name = "511";
    rooms room_511(Access, Room_Name);
    rooms_vector.push_back(room_511);

    Name_Surname = "Alexander Tormasov";
    Date = "12.12.1970";
    Pet = "No pet";
    cabinet = "Alexander Tormasov's cabinet";
    Director d(Name_Surname, cabinet, Date, Pet);
    directors.push_back(d);

    Name_Surname = "Eugenie Zuev";
    Date = "25.10.1973";
    Pet = "No pet";
    cabinet = "436";
    Professor p1(Name_Surname, cabinet, Date, Pet);
    profs.push_back(p1);
    Access = "Special";
    Room_Name = "436";
    rooms room_436(Access, Room_Name);
    rooms_vector.push_back(room_436);

    Name_Surname = "Nikolai Shilov";
    Date = "20.10.1973";
    Pet = "No pet";
    cabinet = "437";
    Professor p2(Name_Surname, cabinet, Date, Pet);
    profs.push_back(p2);
    Access = "Special";
    Room_Name = "437";
    rooms room_437(Access, Room_Name);
    rooms_vector.push_back(room_437);

    Name_Surname = "Manuel Mazzara";
    Date = "22.05.1985";
    Pet = "No pet";
    cabinet = "438";
    Professor p3(Name_Surname, cabinet, Date, Pet);
    profs.push_back(p3);
    Access = "Special";
    Room_Name = "438";
    rooms room_438(Access, Room_Name);
    rooms_vector.push_back(room_438);

    Name_Surname = "Artem Burmyakov";
    Date = "11.07.1989";
    Pet = "No pet";
    cabinet = "439";
    Professor p4(Name_Surname, cabinet, Date, Pet);
    profs.push_back(p4);
    Access = "Special";
    Room_Name = "439";
    rooms room_439(Access, Room_Name);
    rooms_vector.push_back(room_439);

    Name_Surname = "Oleg Bulichev";
    Date = "11.07.1989";
    Pet = "No pet";
    cabinet = "Robo Lab";
    LabEmployee l1(Name_Surname, cabinet, Date, Pet);
    labs.push_back(l1);

    Name_Surname = "Kostya Bulichev";
    Date = "13.06.1985";
    Pet = "No pet";
    cabinet = "Robo Lab";
    LabEmployee l2(Name_Surname, cabinet, Date, Pet);
    labs.push_back(l2);

    Name_Surname = "Roman Voronov";
    Date = "14.01.2002";
    Pet = "No pet";
    cabinet = "Robo Lab";
    LabEmployee l3(Name_Surname, cabinet, Date, Pet);
    labs.push_back(l3);

    Name_Surname = "Artem Voronov";
    Date = "14.01.2002";
    Pet = "No pet";
    cabinet = "Robo Lab";
    LabEmployee l4(Name_Surname, cabinet, Date, Pet);
    labs.push_back(l4);

    Name_Surname = "Ann Kopeikina";
    Date = "17.06.2002";
    Pet = "No pet";
    cabinet = "GameDev Lab";
    LabEmployee l5(Name_Surname, cabinet, Date, Pet);
    labs.push_back(l5);

    Name_Surname = "Danya Kakoito";
    Date = "25.12.1996";
    Pet = "No pet";
    cabinet = "GameDev Lab";
    LabEmployee l6(Name_Surname, cabinet, Date, Pet);
    labs.push_back(l6);

    Name_Surname = "Danila Kochan";
    Date = "26.07.1999";
    Pet = "No pet";
    cabinet = "GameDev Lab";
    LabEmployee l7(Name_Surname, cabinet, Date, Pet);
    labs.push_back(l7);

    Name_Surname = "Artem Horoshiy";
    Date = "26.01.2000";
    Pet = "No pet";
    cabinet = "GameDev Lab";
    LabEmployee l8(Name_Surname, cabinet, Date, Pet);
    labs.push_back(l8);
}

void generator::print_data(vector<Guest> &guests, vector<Student> &students, vector<LabEmployee> &labs, vector<Professor> &profs, vector<Director> &directors, vector<Admin> &admins, vector<rooms> &rooms_vector) {
    cout << "List of rooms: \n    ";
    for (int i = 0; i < rooms_vector.size(); i++) {
        cout << rooms_vector[i].getName();
        if (i == rooms_vector.size() - 1) {
            cout << " ";
        }
        else {
            cout << "; ";
        }
    }
    cout << "\n\n";

    cout << "Directors(Amount = " << directors.size() << "):\n    ";
    for (int i = 0; i < directors.size(); i++) {
        cout << directors[i].getName();
        if (i == directors.size() - 1) {
            cout << " ";
        }
        else {
            cout << "; ";
        }
    }
    cout << "\n\n";

    cout << "Admins(Amount = " << admins.size() << "):\n    ";
    for (int i = 0; i < admins.size(); i++) {
        cout << admins[i].getName();
        if (i == admins.size() - 1) {
            cout << " ";
        }
        else {
            cout << "; ";
        }
    }
    cout << "\n\n";

    cout << "Professors(Amount = " << profs.size() << "):\n    ";
    for (int i = 0; i < profs.size(); i++) {
        cout << profs[i].getName();
        if (i == profs.size() - 1) {
            cout << " ";
        }
        else {
            cout << "; ";
        }
    }
    cout << "\n\n";

    cout << "Employees(Amount = " << labs.size() << "):\n    ";
    for (int i = 0; i < labs.size(); i++) {
        cout << labs[i].getName();
        if (i == labs.size() - 1) {
            cout << " ";
        }
        else {
            cout << "; ";
        }
    }
    cout << "\n\n";

    cout << "Students(Amount = " << students.size() << "):\n    ";
    for (int i = 0; i < students.size(); i++) {
        cout << students[i].getName();
        if (i == students.size() - 1) {
            cout << " ";
        }
        else {
            cout << "; ";
        }
    }
    cout << "\n\n";

    cout << "Guests(Amount = " << guests.size() << "):\n    ";
    for (int i = 0; i < guests.size(); i++) {
        cout << guests[i].getName();
        if (i == guests.size() - 1) {
            cout << " ";
        }
        else {
            cout << "; ";
        }
    }
    cout << "\n\n";
}

void generator::add_data(string &class_of_person, bool &t, string &Name, string &Surname, string &Name_Surname, string &cabinet, string &Date, string &Pet, std::string &password, string &Access, string &Room_Name, vector<Guest> &guests, vector<Student> &students, vector<LabEmployee> &labs, vector<Professor> &profs, vector<Director> &directors, vector<Admin> &admins, vector<rooms> &rooms_vector) {
    if (class_of_person == "Guest") {
        cout << "Name and Surname: ";
        cin >> Name >> Surname;
        Name_Surname = Name + " " + Surname;
        cout << "Date: ";
        cin >> Date;
        cout << "Pet: ";
        getline(cin, Pet);
        getline(cin, Pet);
        Guest g(Name_Surname, Date, Pet);
        guests.push_back(g);
        cout << class_of_person << " added\n";
    }
    else if (class_of_person == "Student") {
        cout << "Name and Surname: ";
        cin >> Name >> Surname;
        Name_Surname = Name + " " + Surname;
        cout << "Date: ";
        cin >> Date;
        cout << "Pet: ";
        getline(cin, Pet);
        getline(cin, Pet);
        Student s(Name_Surname, Date, Pet);
        students.push_back(s);
        cout << class_of_person << " added\n";
    }
    else if (class_of_person == "Employee") {
        cout << "Name and Surname: ";
        cin >> Name >> Surname;
        Name_Surname = Name + " " + Surname;
        cout << "Lab: ";
        getline(cin, cabinet);
        getline(cin, cabinet);
        cout << "Date: ";
        cin >> Date;
        cout << "Pet: ";
        getline(cin, Pet);
        getline(cin, Pet);
        t = false;
        for (auto & i : rooms_vector) {
            if (i.getName() == cabinet) {
                t = true;
                break;
            }
        }
        if (!t) {
            cout << "We have not this lab in our university, therefore we can't add this " << class_of_person << "\n";
        }
        else {
            LabEmployee l(Name_Surname, cabinet, Date, Pet);
            labs.push_back(l);
            cout << class_of_person << " added\n";
        }
    }
    else if (class_of_person == "Professor") {
        cout << "Name and Surname: ";
        cin >> Name >> Surname;
        Name_Surname = Name + " " + Surname;
        cout << "Cabinet: ";
        getline(cin, cabinet);
        getline(cin, cabinet);
        cout << "Date: ";
        cin >> Date;
        cout << "Pet: ";
        getline(cin, Pet);
        getline(cin, Pet);
        t = false;
        for (auto & i : rooms_vector) {
            if (i.getName() == cabinet) {
                t = true;
                break;
            }
        }
        if (!t) {
            Access = "Special";
            Room_Name = cabinet;
            rooms room(Access, Room_Name);
            rooms_vector.push_back(room);
        }
        Professor p(Name_Surname, cabinet, Date, Pet);
        profs.push_back(p);
        cout << class_of_person << " added\n";
    }
    else if (class_of_person == "Admin") {
        cout << "Password: ";
        cin >> password;
        if (password == "9876") {
            cout << "Name and Surname: ";
            cin >> Name >> Surname;
            Name_Surname = Name + " " + Surname;
            cout << "Cabinet: ";
            getline(cin, cabinet);
            getline(cin, cabinet);
            cout << "Date: ";
            cin >> Date;
            cout << "Pet: ";
            getline(cin, Pet);
            getline(cin, Pet);
            t = false;
            for (auto & i : rooms_vector) {
                if (i.getName() == cabinet) {
                    t = true;
                    break;
                }
            }
            if (!t) {
                Access = "Special";
                Room_Name = cabinet;
                rooms room(Access, Room_Name);
                rooms_vector.push_back(room);
            }
            Admin a(Name_Surname, cabinet, Date, Pet);
            admins.push_back(a);
            cout << class_of_person << " added\n";
        }
        else {
            cout << "Incorrect password, therefore we can't add this " << class_of_person << "\n";
        }
    }
    else if (class_of_person == "Director") {
        cout << "Name and Surname: ";
        cin >> Name >> Surname;
        Name_Surname = Name + " " + Surname;
        cout << "Cabinet: ";
        getline(cin, cabinet);
        getline(cin, cabinet);
        cout << "Date: ";
        cin >> Date;
        cout << "Pet: ";
        getline(cin, Pet);
        getline(cin, Pet);
        t = false;
        for (auto & i : rooms_vector) {
            if (i.getName() == cabinet) {
                t = true;
                break;
            }
        }
        if (!t) {
            Access = "Special";
            Room_Name = cabinet;
            rooms room(Access, Room_Name);
            rooms_vector.push_back(room);
        }
        Director d(Name_Surname, cabinet, Date, Pet);
        directors.push_back(d);
        cout << class_of_person << " added\n";
    }
    else {
        cout << "Incorrect class, try again\n";
    }
}

void generator::info_data(string &class_of_person, bool &t, string &Name, string &Surname, string &Name_Surname, vector<Guest> &guests, vector<Student> &students, vector<LabEmployee> &labs, vector<Professor> &profs, vector<Director> &directors, vector<Admin> &admins, vector<rooms> &rooms_vector) {
    if (class_of_person == "Guest") {
        cout << "Name and Surname: ";
        cin >> Name >> Surname;
        Name_Surname = Name + " " + Surname;
        t = true;
        for (auto &i : guests) {
            if (i.getName() == Name_Surname) {
                cout << "Access level: " << i.getAccess() << "\n";
                cout << "Date: " << i.getDate() << "\n";
                cout << "Pet: " << i.getPet() << "\n";
                t = false;
                break;
            }
        }
        if (t) {
            cout << "No person with this name\n";
        }
    }
    else if (class_of_person == "Student") {
        cout << "Name and Surname: ";
        cin >> Name >> Surname;
        Name_Surname = Name + " " + Surname;
        t = true;
        for (auto &i : students) {
            if (i.getName() == Name_Surname) {
                cout << "Access level: " << i.getAccess() << "\n";
                cout << "Date: " << i.getDate() << "\n";
                cout << "Pet: " << i.getPet() << "\n";
                t = false;
                break;
            }
        }
        if (t) {
            cout << "No person with this name\n";
        }
    }
    else if (class_of_person == "Employee") {
        cout << "Name and Surname: ";
        cin >> Name >> Surname;
        Name_Surname = Name + " " + Surname;
        t = true;
        for (auto &i : labs) {
            if (i.getName() == Name_Surname) {
                cout << "Access level: " << i.getAccess() << "\n";
                cout << "Lab: " << i.getCabinet() << "\n";
                cout << "Date: " << i.getDate() << "\n";
                cout << "Pet: " << i.getPet() << "\n";
                t = false;
                break;
            }
        }
        if (t) {
            cout << "No person with this name\n";
        }
    }
    else if (class_of_person == "Professor") {
        cout << "Name and Surname: ";
        cin >> Name >> Surname;
        Name_Surname = Name + " " + Surname;
        t = true;
        for (auto &i : profs) {
            if (i.getName() == Name_Surname) {
                cout << "Access level: " << i.getAccess() << "\n";
                cout << "Cabinet: " << i.getCabinet() << "\n";
                cout << "Date: " << i.getDate() << "\n";
                cout << "Pet: " << i.getPet() << "\n";
                t = false;
                break;
            }
        }
        if (t) {
            cout << "No person with this name\n";
        }
    }
    else if (class_of_person == "Admin") {
        cout << "Name and Surname: ";
        cin >> Name >> Surname;
        Name_Surname = Name + " " + Surname;
        t = true;
        for (auto &i : admins) {
            if (i.getName() == Name_Surname) {
                cout << "Access level: " << i.getAccess() << "\n";
                cout << "Cabinet: " << i.getCabinet() << "\n";
                cout << "Date: " << i.getDate() << "\n";
                cout << "Pet: " << i.getPet() << "\n";
                t = false;
                break;
            }
        }
        if (t) {
            cout << "No person with this name\n";
        }
    }
    else if (class_of_person == "Director") {
        cout << "Name and Surname: ";
        cin >> Name >> Surname;
        Name_Surname = Name + " " + Surname;
        t = true;
        for (auto &i : directors) {
            if (i.getName() == Name_Surname) {
                cout << "Access level: " << i.getAccess() << "\n";
                cout << "Cabinet: " << i.getCabinet() << "\n";
                cout << "Date: " << i.getDate() << "\n";
                cout << "Pet: " << i.getPet() << "\n";
                t = false;
                break;
            }
        }
        if (t) {
            cout << "No person with this name\n";
        }
    }
    else {
        cout << "Incorrect class, try again\n";
    }
}

void generator::change_data(string &class_of_person, bool &t, string &Name, string &Surname, string &Name_Surname, string &password, string &Access, vector<Guest> &guests, vector<Student> &students, vector<LabEmployee> &labs, vector<Professor> &profs, vector<Director> &directors, vector<Admin> &admins, vector<rooms> &rooms_vector) {
    cout << "Password: ";
    cin >> password;
    if (password == "9876") {
        if (class_of_person == "Guest") {
            cout << "Name and Surname: ";
            cin >> Name >> Surname;
            Name_Surname = Name + " " + Surname;
            t = true;
            for (auto &i : guests) {
                if (i.getName() == Name_Surname) {
                    admins[0].changeAccess(i, Access);
                    t = false;
                    break;
                }
            }
            if (t) {
                cout << "No person with this name\n";
            }
        }
        else if (class_of_person == "Student") {
            cout << "Name and Surname: ";
            cin >> Name >> Surname;
            Name_Surname = Name + " " + Surname;
            t = true;
            for (auto &i : students) {
                if (i.getName() == Name_Surname) {
                    admins[0].changeAccess(i, Access);
                    t = false;
                    break;
                }
            }
            if (t) {
                cout << "No person with this name\n";
            }
        }
        else if (class_of_person == "Employee") {
            cout << "Name and Surname: ";
            cin >> Name >> Surname;
            Name_Surname = Name + " " + Surname;
            t = true;
            for (auto &i : labs) {
                if (i.getName() == Name_Surname) {
                    admins[0].changeAccess(i, Access);
                    t = false;
                    break;
                }
            }
            if (t) {
                cout << "No person with this name\n";
            }
        }
        else if (class_of_person == "Professor") {
            cout << "Name and Surname: ";
            cin >> Name >> Surname;
            Name_Surname = Name + " " + Surname;
            t = true;
            for (auto &i : profs) {
                if (i.getName() == Name_Surname) {
                    admins[0].changeAccess(i, Access);
                    t = false;
                    break;
                }
            }
            if (t) {
                cout << "No person with this name\n";
            }
        }
        else if (class_of_person == "Admin") {
            cout << "Name and Surname: ";
            cin >> Name >> Surname;
            Name_Surname = Name + " " + Surname;
            t = true;
            for (auto &i : admins) {
                if (i.getName() == Name_Surname) {
                    admins[0].changeAccess(i, Access);
                    t = false;
                    break;
                }
            }
            if (t) {
                cout << "No person with this name\n";
            }
        }
        else if (class_of_person == "Director") {
            cout << "Name and Surname: ";
            cin >> Name >> Surname;
            Name_Surname = Name + " " + Surname;
            t = true;
            for (auto &i : directors) {
                if (i.getName() == Name_Surname) {
                    admins[0].changeAccess(i, Access);
                    t = false;
                    break;
                }
            }
            if (t) {
                cout << "No person with this name\n";
            }
        }
        else {
            cout << "Incorrect class, try again\n";
        }
    }
    else {
        cout << "Incorrect password, therefore we can't change access level\n";
    }
}

void generator::add_room_data(string &class_of_person, bool &t, string &Name, string &Surname, string &Name_Surname, string &password, rooms &room, vector<Guest> &guests, vector<Student> &students, vector<LabEmployee> &labs, vector<Professor> &profs, vector<Director> &directors, vector<Admin> &admins, vector<rooms> &rooms_vector) {
    cout << "Password: ";
    cin >> password;
    if (password == "9876") {
        if (class_of_person == "Guest") {
            cout << "Name and Surname: ";
            cin >> Name >> Surname;
            Name_Surname = Name + " " + Surname;
            t = true;
            for (auto &i : guests) {
                if (i.getName() == Name_Surname) {
                    admins[0].giveAccesToRoom(i, room);
                    t = false;
                    break;
                }
            }
            if (t) {
                cout << "No person with this name\n";
            }
        }
        else if (class_of_person == "Student") {
            cout << "Name and Surname: ";
            cin >> Name >> Surname;
            Name_Surname = Name + " " + Surname;
            t = true;
            for (auto &i : students) {
                if (i.getName() == Name_Surname) {
                    admins[0].giveAccesToRoom(i, room);
                    t = false;
                    break;
                }
            }
            if (t) {
                cout << "No person with this name\n";
            }
        }
        else if (class_of_person == "Employee") {
            cout << "Name and Surname: ";
            cin >> Name >> Surname;
            Name_Surname = Name + " " + Surname;
            t = true;
            for (auto &i : labs) {
                if (i.getName() == Name_Surname) {
                    admins[0].giveAccesToRoom(i, room);
                    t = false;
                    break;
                }
            }
            if (t) {
                cout << "No person with this name\n";
            }
        }
        else if (class_of_person == "Professor") {
            cout << "Name and Surname: ";
            cin >> Name >> Surname;
            Name_Surname = Name + " " + Surname;
            t = true;
            for (auto &i : profs) {
                if (i.getName() == Name_Surname) {
                    admins[0].giveAccesToRoom(i, room);
                    t = false;
                    break;
                }
            }
            if (t) {
                cout << "No person with this name\n";
            }
        }
        else if (class_of_person == "Admin") {
            cout << "Name and Surname: ";
            cin >> Name >> Surname;
            Name_Surname = Name + " " + Surname;
            t = true;
            for (auto &i : admins) {
                if (i.getName() == Name_Surname) {
                    admins[0].giveAccesToRoom(i, room);
                    t = false;
                    break;
                }
            }
            if (t) {
                cout << "No person with this name\n";
            }
        }
        else if (class_of_person == "Director") {
            cout << "Name and Surname: ";
            cin >> Name >> Surname;
            Name_Surname = Name + " " + Surname;
            t = true;
            for (auto &i : directors) {
                if (i.getName() == Name_Surname) {
                    admins[0].giveAccesToRoom(i, room);
                    t = false;
                    break;
                }
            }
            if (t) {
                cout << "No person with this name\n";
            }
        }
        else {
            cout << "Incorrect class, try again\n";
        }
    }
    else {
        cout << "Incorrect password, therefore we can't change access level\n";
    }
}


