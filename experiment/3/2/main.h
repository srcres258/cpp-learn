#ifndef __MAIN_H__
#define __MAIN_H__

class Vehicle {
public:
    void run();
    void stop();
};

class Bicycle : public Vehicle {
public:
    void run();
    void stop();
};

class Car : public Vehicle {
public:
    void run();
    void stop();
};

class Motorcycle : public Bicycle, Car {
public:
    void run();
    void stop();
};

#endif