#include <iostream>

class Vehicle {
public:
    virtual void run() = 0;
    virtual void stop() = 0;
};

class Bicycle : public Vehicle {
public:
    void run() override;
    void stop() override;
};

class Car : public Vehicle {
public:
    void run() override;
    void stop() override;
};

class Motorcycle : public Bicycle, public Car {
public:
    void run() override;
    void stop() override;
};

void Bicycle::run() {
    std::cout << "Bicycle is running." << std::endl;
}

void Bicycle::stop() {
    std::cout << "Bicycle is stopped." << std::endl;
}

void Car::run() {
    std::cout << "Car is running." << std::endl;
}

void Car::stop() {
    std::cout << "Car is stopped." << std::endl;
}

void Motorcycle::run() {
    std::cout << "Motorcycle is running." << std::endl;
}

void Motorcycle::stop() {
    std::cout << "Motorcycle is stopped." << std::endl;
}

int main() {
    Bicycle bicycle;
    Car car;
    Motorcycle motorcycle;

    bicycle.run();
    bicycle.stop();

    car.run();
    car.stop();

    motorcycle.run();
    motorcycle.stop();

    return 0;
}