#include <iostream>

class Vehicle {
public:
    virtual void print() = 0;
};

class Car : public Vehicle {
public:
    void print() override;
};

class Truck : public Vehicle {
public:
    void print() override;
};

class Boat : public Vehicle {
public:
    void print() override;
};

void Car::print() {
    std::cout << "This is a car." << std::endl;
}

void Truck::print() {
    std::cout << "This is a truck." << std::endl;
}

void Boat::print() {
    std::cout << "This is a boat." << std::endl;
}

int main() {
    Car c;
    Truck t;
    Boat b;
    c.print();
    t.print();
    b.print();
    return 0;
}