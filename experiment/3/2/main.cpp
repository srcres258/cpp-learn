#include <iostream>

using namespace std;

#include "main.h"

void Vehicle::run() {
    cout << "Vehicle run" << endl;
}

void Vehicle::stop() {
    cout << "Vehicle stop" << endl;
}

void Bicycle::run() {
    cout << "Bicycle run" << endl;
}

void Bicycle::stop() {
    cout << "Bicycle stop" << endl;
}

void Car::run() {
    cout << "Car run" << endl;
}

void Car::stop() {
    cout << "Car stop" << endl;
}

void Motorcycle::run() {
    cout << "Motorcycle run" << endl;
}

void Motorcycle::stop() {
    cout << "Motorcycle stop" << endl;
}

int main() {
    Vehicle v;
    v.run();
    v.stop();

    Bicycle b;
    b.run();
    b.stop();

    Car c;
    c.run();
    c.stop();

    Motorcycle m;
    m.run();
    m.stop();

    return 0;
}