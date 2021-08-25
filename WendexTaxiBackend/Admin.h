//
// Created by dale on 25.04.2021.
//

#ifndef HW4_ADMIN_H
#define HW4_ADMIN_H

#include <iostream>
#include <string>

using namespace std;

class Admin {
protected:
    string name;
    bool loggined;
public:
    Admin() = default;
    Admin(string name);
    string getName();
    bool isLoginned();
    void changeLoggined();
};


#endif //HW4_ADMIN_H
