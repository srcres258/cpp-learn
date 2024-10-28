#include <iostream>

class Point {
public:
    int x, y;

    Point();
    Point(int x, int y);

    Point & operator++();
    Point & operator++(int);
    Point & operator--();
    Point & operator--(int);
};

Point::Point() : x(0), y(0) {}

Point::Point(int x, int y) : x(x), y(y) {}

Point & Point::operator++() {
    x++;
    y++;
    return *this;
}

Point & Point::operator++(int) {
    x++;
    y++;
    return *this;
}

Point & Point::operator--() {
    x--;
    y--;
    return *this;
}

Point & Point::operator--(int) {
    x--;
    y--;
    return *this;
}

int main() {
    Point p(1, 2);
    std::cout << "Original: (" << p.x << ", " << p.y << ")" << std::endl;

    ++p;
    std::cout << "After ++ (fore): (" << p.x << ", " << p.y << ")" << std::endl;

    p++;
    std::cout << "After ++ (back): (" << p.x << ", " << p.y << ")" << std::endl;

    --p;
    std::cout << "After -- (fore): (" << p.x << ", " << p.y << ")" << std::endl;

    p--;
    std::cout << "After -- (back): (" << p.x << ", " << p.y << ")" << std::endl;

    return 0;
}