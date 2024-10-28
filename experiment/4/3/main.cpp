#include <iostream>
#include <array>

class Shape {
public:
    virtual double area() const = 0;
};

class Square : public Shape {
public:
    Square(double side);

    double area() const noexcept override;

private:
    double side;
};

class Triangle : public Shape {
public:
    Triangle(double base, double height);

    double area() const noexcept override;

private:
    double base;
    double height;
};

class Circle : public Shape {
public:
    Circle(double radius);

    double area() const noexcept override;

private:
    double radius;
};

Square::Square(double side) : side(side) {}

double Square::area() const noexcept {
    return side * side;
}

Triangle::Triangle(double base, double height) : base(base), height(height) {}

double Triangle::area() const noexcept {
    return 0.5 * base * height;
}

Circle::Circle(double radius) : radius(radius) {}

double Circle::area() const noexcept {
    return 3.14159265358979323846 * radius * radius;
}

int main() {
    Square s(5);
    Triangle t(4, 3);
    Circle c(3);

    std::cout << "Square's area: " << s.area() << std::endl;
    std::cout << "Triangle's area: " << t.area() << std::endl;
    std::cout << "Circle's area: " << c.area() << std::endl;

    std::array<Shape *, 3> shapes = {&s, &t, &c};

    double total_area = 0.0;
    for (Shape *shape : shapes) {
        total_area += shape->area();
    }

    std::cout << "Total area: " << total_area << std::endl;

    return 0;
}