#include <iostream>

class Shape {
public:
    virtual double area() = 0;
};

class Rectangle : public Shape {
public:
    Rectangle(double w, double h);

    double area() override;

private:
    double width, height;
};

class Circle : public Shape {
public:
    Circle(double r);

    double area() override;

private:
    double radius;
};

Rectangle::Rectangle(double w, double h) : width(w), height(h) {}

double Rectangle::area() {
    return width * height;
}

Circle::Circle(double r) : radius(r) {}

double Circle::area() {
    return 3.14159265358979323846 * radius * radius;
}

int main() {
    Rectangle r(3.0, 4.0);
    Circle c(5.0);

    std::cout << "Rectangle area: " << r.area() << std::endl;
    std::cout << "Circle area: " << c.area() << std::endl;

    return 0;
}