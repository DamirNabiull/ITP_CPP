#include "PassengerGateway.h"
#include "DriverGateway.h"
#include "AdminGateway.h"
using namespace std;

int main() {
    vector<Passenger*> vp;
    vector<Driver*> vd;
    vector<Admin*> va;
    Gateway gateway(&vp, &vd, &va);
    PassengerGateway pG(vp, gateway);
    DriverGateway dG(vd, gateway);
    AdminGateway aG(gateway);

    Passenger p("Damir", 5, money);
    Passenger p1("Dinar", 5, money);
    Passenger p2("Karina", 5, money);
    Car c("W Polo", comfort, "Red", "123");
    Car c4("Audi A3", comfort, "Black", "124");
    Car c5("Toyota Mark", economy, "Blue", "125");
    vector<Car> carForD;
    carForD.push_back(c);
    carForD.push_back(c4);
    carForD.push_back(c5);
    Driver d("Nikita", 5, carForD);
    Driver d3("Alena", 5, carForD);
    Car c1("Lada 2107", economy, "Blue", "666");
    Driver d1("Oleg", 3, c1);
    Car c2("Mercedes G63 AMG", business, "Black", "777");
    c2.parkRightInFrontOfTheEntrance();
    c1.parkRightInFrontOfTheEntrance();
    Admin admin("Glava");

    va.push_back(&admin);

    aG.blockLogin(admin, p2);
    aG.login(admin);
    aG.blockLogin(admin, p2);
    pG.login(p2);

    aG.blockLogin(admin, d3);
    dG.login(d3);

    vp.push_back(&p);
    vp.push_back(&p1);
    vd.push_back(&d);
    vd.push_back(&d1);
    vp.push_back(&p2);
    vd.push_back(&d3);

    pG.orderHistory(p);
    pG.login(p);
    pG.orderHistory(p);
    pG.seePayment(p);
    pG.seePined(p);
    pG.changePayment(p, money);
    pG.seePayment(p);
    pG.addPined(p, pyaterochka);
    pG.addPined(p, university);
    pG.seePined(p);
    pG.removePined(p, pyaterochka);
    pG.seePined(p);
    order temp = pG.checkRide(p, pyaterochka, university, comfort);
    pG.orderRide(p, temp);
    pG.currentCoordinates(p);

    dG.orderHistory(d);
    dG.login(d);
    dG.seeCar(d);
    dG.updateStatus(d);
    temp = dG.checkAvailableOrder(d);

    aG.validateCar(admin, d, true);

    temp = dG.checkAvailableOrder(d);
    dG.accept(d, temp);

    pG.currentCoordinates(p);
    pG.currentCoordinates(p);

    dG.endRide(d);
    dG.orderHistory(d);
    pG.orderHistory(p);
    dG.updateStatus(d);

    dG.seeCar(d);

    temp = pG.checkRide(p, bar, university, economy);
    pG.orderRide(p, temp, card);

    temp = dG.checkAvailableOrder(d);
    dG.updateStatus(d);
    temp = dG.checkAvailableOrder(d);

    dG.login(d1);
    dG.updateStatus(d1);
    temp = dG.checkAvailableOrder(d1);

    aG.validateCar(admin, d1, false);

    temp = dG.checkAvailableOrder(d1);

    aG.validateCar(admin, d1, true);

    temp = dG.checkAvailableOrder(d1);

    dG.accept(d1, temp);

    pG.currentCoordinates(p);
    pG.currentCoordinates(p);

    dG.endRide(d1);
    dG.orderHistory(d1);
    pG.orderHistory(p);
    dG.orderHistory(d);

    pG.login(p1);
    order temp1 = pG.checkRide(p1, magnit, pyaterochka, comfort);
    temp = pG.checkRide(p, university, bar, comfort);
    pG.orderRide(p1, temp1, card);
    pG.orderRide(p, temp, money);

    temp = dG.checkAvailableOrder(d);
    dG.decline(d, temp);
    temp = dG.checkAvailableOrder(d);
    dG.accept(d, temp);
    dG.endRide(d);
    temp = dG.checkAvailableOrder(d);
    dG.accept(d, temp);
    dG.endRide(d);

    pG.orderHistory(p);
    pG.orderHistory(p1);
    dG.orderHistory(d);
    dG.orderHistory(d1);

    pG.changePayment(p, card);

    aG.seeInfo(admin, p);
    aG.seeInfo(admin, d);
}
