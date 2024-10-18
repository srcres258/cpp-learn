#include <iostream>

class Point {
public:
    Point(double x, double y);

protected:
    double x, y;
};

class Circle : public Point {
public:
    Circle(double x, double y, double radius);

    void print() const;

protected:
    double radius;
};

Point::Point(double x, double y)
    : x(x), y(y) {}

Circle::Circle(double x, double y, double radius)
    : Point(x, y), radius(radius) {}

void Circle::print() const {
    using namespace std;
    cout << "Circle position: (" << x << ", " << y << ")" << endl;
    cout << "Circle radius: " << radius << endl;

    double area = 3.14159265358979323846 * radius * radius;
    cout << "Circle area: " << area << endl;
}

int main() {
    Circle c(1.0, 2.0, 3.0);
    c.print();
    return 0;
}