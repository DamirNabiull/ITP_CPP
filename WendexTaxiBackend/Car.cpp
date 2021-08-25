//
// Created by dale on 09.04.2021.
//

#include "Car.h"

void Car::printInfo() {
    this->x = (double)(rand()%100 + 1);
    this->y = (double)(rand()%100 + 1);
    cout << "Car type: ";
    if (this->carType == economy) {
        cout << "Economy";
    }
    if (this->carType == comfort) {
        cout << "Comfort";
    }
    if (this->carType == comfortPlus) {
        cout << "ComfortPlus";
    }
    if (this->carType == business) {
        cout << "Business";
    }
    cout << " Model: " << this->model << " Color: " << this->color << " Number: " << this->number << " Coordinates: " << this->x << " " << this->y << "\n\n";
}

Car::Car(string model, type carType, string color, string number) {
    this->model = model;
    this->number = number;
    this->carType = carType;
    this->color = color;
    this->x = (double)(rand()%100 + 1);
    this->y = (double)(rand()%100 + 1);
    if (carType == economy) {
        this->freeBottleOfWater = 0;
    } else {
        this->freeBottleOfWater = rand()%10 + 1;
    }
}

void Car::parkRightInFrontOfTheEntrance() {
    if (this->carType == business) {
        cout << "Car park right in front of the entrance \n";
    } else {
        cout << "This type of car can't park right in front of the entrance \n";
    }
}

type Car::carCarType() {
    return this->carType;
}

void Car::changeAndPrintNumberOfWater() {
    if (this->carType == comfort || this->carType == comfortPlus || this->carType == business) {
        this->freeBottleOfWater = freeBottleOfWater - rand()%freeBottleOfWater;
        cout << "Number of water: " << freeBottleOfWater <<"\n\n";
    }
}

string Car::getModel() {
    return this->model;
}

string Car::getColor() {
    return this->color;
}

string Car::getNumber() {
    return this->number;
}

void Car::getCoordinates() {
    this->x = (double)(rand()%100 + 1);
    this->y = (double)(rand()%100 + 1);
    cout << x << " " << y << "\n\n";
}
