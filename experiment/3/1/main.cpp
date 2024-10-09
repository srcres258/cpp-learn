#include <iostream>

#include "main.h"

const double PI = 3.14159265358979323846264;

Point::Point() : Point(0, 0) {
}

Point::Point(int x, int y)
    : x(x), y(y) {
}

void Point::print_point_info() const

noexcept {
    using namespace std;
    cout << "Point coordinate: x = " << x << ", y = " << y << endl;
}

std::ostream &operator<<(std::ostream &os, const Point &p) {
    using namespace std;
    os << "Point coordinate: x = " << p.x << ", y = " << p.y << endl;
    return os;
}

Circle::Circle() : Circle(0.0) {
}

Circle::Circle(double radius) : Circle(0, 0, radius) {
}

Circle::Circle(int x, int y, double radius)
    : Point(x, y), radius(radius) {
}

double Circle::calc_area() const

noexcept {
    auto result = PI * radius * radius;
    return result;
}

void Circle::print_circle_info() const

noexcept {
    using namespace std;
    auto area = calc_area();
    cout << "Circle area: " << area << endl;
}

std::ostream &operator<<(std::ostream &os, const Circle &c) {
    using namespace std;
    auto area = c.calc_area();
    os << "Circle area: " << area << endl;
    return os;
}

Cylinder::Cylinder() : Cylinder(0.0) {
}

Cylinder::Cylinder(double height) : Cylinder(0.0, height) {
}

Cylinder::Cylinder(double radius, double height) : Cylinder(0, 0, radius, height) {
}

Cylinder::Cylinder(int x, int y, double radius, double height)
    : Circle(x, y, radius), height(height) {
}

double Cylinder::calc_volume() const

noexcept {
    auto area = calc_area();
    auto result = area * height;
    return result;
}

void Cylinder::print_cylinder_info() const

noexcept {
    using namespace std;
    auto volume = calc_volume();
    cout << "Cylinder volume: " << volume << endl;
}

std::ostream &operator<<(std::ostream &os, const Cylinder &c) {
    using namespace std;
    auto volume = c.calc_volume();
    os << "Cylinder volume: " << volume << endl;
    return os;
}

int main() {
    using namespace std;

    Point point(114, 514);
    cout << point;
    cout << "--------------------" << endl;

    Circle circle(114, 514, 1919.0);
    cout << circle;
    cout << "--------------------" << endl;

    Cylinder cylinder(114, 514, 1919.0, 810.0);
    cout << cylinder;
    cout << "--------------------" << endl;

    return 0;
}