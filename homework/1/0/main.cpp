#include <iostream>

class Base {};

class Circle : public Base {
public:
    Circle(double r);

    double area() const;

protected:
    double radius;
};

class Cylinder : public Circle {
public:
    Cylinder(double r, double h);

    double volume() const;

protected:
    double height;
};

const double PI = 3.14159;

Circle::Circle(double r) : radius(r) {}

double Circle::area() const {
    return PI * radius * radius;
}

Cylinder::Cylinder(double r, double h) : Circle(r), height(h) {}

double Cylinder::volume() const {
    return area() * height;
}

int main() {
    Circle circle(2.0);
    Cylinder cylinder(2.0, 10.0);
    std::cout << "Circle area: " << circle.area() << std::endl;
    std::cout << "Cylinder volume: " << cylinder.volume() << std::endl;
    return 0;
}