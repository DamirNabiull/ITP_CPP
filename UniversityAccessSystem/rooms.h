//
// Created by dale on 06.03.2021.
//

#ifndef HW2_ROOMS_H
#define HW2_ROOMS_H
#include <string>

class rooms {
protected:
    std::string Access;
    std::string Name;
public:
    rooms(std::string &Access, std::string &Name);
    std::string getAccessLevel();
    std::string getName();
};


#endif //HW2_ROOMS_H
