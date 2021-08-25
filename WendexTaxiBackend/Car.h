//
// Created by dale on 09.04.2021.
//

#ifndef HW4_CAR_H
#define HW4_CAR_H
#include <iostream>
#include <string>
using namespace std;

enum type{
    economy,
    comfort,
    comfortPlus,
    business
};

class Car {
protected:
    string model;
    type carType;
    double x, y;
    string color;
    string number;
    int freeBottleOfWater;
public:
    Car() = default;
    Car(string model,type carType, string color,string number);
    void parkRightInFrontOfTheEntrance();
    void printInfo();
    type carCarType();
    void changeAndPrintNumberOfWater();
    string getModel();
    string getColor();
    string getNumber();
    void getCoordinates();
};


#endif //HW4_CAR_H
