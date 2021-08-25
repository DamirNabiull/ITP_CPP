#Language standard: C++14
#Compiler: GCC
#OS: Linux

#How to run code:
    1) Open folder HW4 as CLion project (in CLion (Because I have cmakeList that execute all additional classes))
    2) Run main.cpp in CLion
    3) Results and all descriptions of actions will appear in console

#Description:
    My programm has external classes: Car, Driver, Passenger, Admin, DriverGateway, PassengerGateway, AdminGateway, order, newOrder and Gateway
        Car - car for driver (with all options that were mentioned in assignment (examples in main.cpp))
        Driver, Admin and Passenger - classes for this characters
        DriverGateway, AdminGateway and PassengerGateway - classes that works with main Gateway
        order and newOrder - classe for orders
        Gateway - class that was mentioned in assignment
    
    Before start you can see some Passengers, Admins and Drivers in files passengers.txt, admins.txt and drivers.txt
        (in folder cmake-build-debug)

    When you run main.cpp, you will see in console some examples of output

    Also at the end you will see new passengers, admins and drivers in files (described before)

    If you create new Passenger, Admin or Driver pushback pointers on them in vectors:
        Passengers in vp(vector of passengers)
        Drivers in vd(vector of drivers)
        Admins in va(vector of admins)

    About dG, aG and pG:
        dG - Driver Gateway
        pG - Passenger Gateway
        aG - Admin Gateway
    
    From 6-th to 13-th rows you can see a part, where we create all important objects (do not delete)
        
    If you run code twice without changes - data about passengers/drivers/admins in main.cpp will appear twice in files
       
        Because I save data about each run of main.cpp, and for each passenger/driver/admin I save his history for this run

    Addresses, carTypes and paymentMethods are Enums

###List of funcions:

        First of all: if you want to call function of PassengerGateway or DriverGateway
            you should write object name of your passenger/driver in brackets
            Examples in main.cpp

        #AdminGateway
        
        1) login(Admin) - Admin login in programm
        2) seeInfo(Admin, Passenger) - print all info about given passenger in console (only if admin loggined)
        3) seeInfo(Admin, Driver) - print all info about given driver in console (only if admin loggined)
        4) blockLogin(Admin, Passenger) - block function of loggin for given passenger (for this run of main.cpp)
        5) blockLogin(Admin, Driver) - block function of loggin for given driver (for this run of main.cpp)
        6) validateCar(Admin, Driver, bool) - if bool == true validate car for driver, no othervise
        7) 

        #DriverGateway

        *Update - 
            driver use his first car in all orders
            driver can't start ride if admin didn't validate his car
        
        1) login(Driver) - Driver login in programm
        2) orderHistory(Driver) - Print order history of given driver in console
        3) seeCar(Driver) - Print in console information about all cars of given driver
        4) updateStatus(Driver) - Update status of driver (working or not)
        5) order checkAvailableOrder(Driver) - Print in console first available order 
            and return this order (for accepting or declining)
        6) accept(Driver, order) - Driver accept given order
        7) decline(Driver, order) - Driver decline given order
        8) endRide(Driver) - Driver end order, if he has it

        #PassengerGateway

        1) login(Passenger &passenger) - Passenger login in programm
        2) orderHistory(Passenger) - Print order history of given passenger in console
        3) seePayment(Passenger) - Print payment method of passenger in console
        4) changePayment(Passenger, payment) - Change payment method of passenger
        5) seePined(Passenger) - Print pinned addresses of passenger in console
        6) addPined(Passenger, address) - Add address to list of pinned addresses of passenger
        7) removePined(Passenger, address) - Remove pinned address from list of pinned addresse 
            of passenger
        8) order checkRide(Passenger, address, address, carType) - Print in console details about order 
            and return this order
        9) orderRide(Passenger, order) - Passenger order given ride
        10) orderRide(Passenger, order, payment) - Passenger order given ride with givem payment method
        11) currentCoordinates(Passenger) - Print current coordinates of car with passenger

        How to create Car (Example in main.cpp):
            Car car(Model(string), type(enum), color(string), number(string));

        How to create passenger (Example in main.cpp):
            Passenger passenger(Name(string), Rating(double), Payment(enum));

        How to create driver (Example in main.cpp):
            Driver driver(Name(string), Rating(double), car(Car));