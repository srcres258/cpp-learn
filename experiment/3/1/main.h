#ifndef __MAIN_H__
#define __MAIN_H__

#include <iostream>

class Point {
    friend std::ostream &operator<<(std::ostream &os, const Point &p);

public:
    Point();
    Point(int x, int y);

    void print_point_info() const noexcept;

private:
    int x;
    int y;
};

std::ostream &operator<<(std::ostream &os, const Point &p);

class Circle : public Point {
    friend std::ostream &operator<<(std::ostream &os, const Circle &c);

public:
    Circle();
    Circle(double radius);
    Circle(int x, int y, double radius);

    void print_circle_info() const noexcept;
    double calc_area() const noexcept;

private:
    double radius;
};

std::ostream &operator<<(std::ostream &os, const Circle &c);

class Cylinder : public Circle {
    friend std::ostream &operator<<(std::ostream &os, const Cylinder &c);

public:
    Cylinder();
    Cylinder(double height);
    Cylinder(double radius, double height);
    Cylinder(int x, int y, double radius, double height);

    void print_cylinder_info() const noexcept;
    double calc_volume() const noexcept;

private:
    double height;
};

std::ostream &operator<<(std::ostream &os, const Cylinder &c);

#endif