cmake_minimum_required(VERSION 3.17)
project(HW4)

set(CMAKE_CXX_STANDARD 14)

add_executable(HW4 main.cpp PassengerGateway.cpp PassengerGateway.h DriverGateway.cpp DriverGateway.h order.cpp order.h Car.cpp Car.h Gateway.cpp Gateway.h newOrder.cpp newOrder.h Characters.cpp Characters.h Passenger.cpp Passenger.h Driver.cpp Driver.h Admin.cpp Admin.h AdminGateway.cpp AdminGateway.h)