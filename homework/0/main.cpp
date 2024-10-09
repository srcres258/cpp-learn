#include <iostream>

class Rectangle {
public:
    int x0, y0;
    int x1, y1;

    Rectangle();
    Rectangle(int x0, int y0, int x1, int y1);

    int calc_perimeter() const noexcept;
    int calc_area() const noexcept;
    void print_info() const noexcept;
};

Rectangle::Rectangle()
    : Rectangle(0, 0, 0, 0) {
}

Rectangle::Rectangle(int x0, int y0, int x1, int y1)
    : x0(x0), y0(y0), x1(x1), y1(y1) {
}

int Rectangle::calc_perimeter() const

noexcept {
    auto width = std::abs(x0 - x1);
    auto height = std::abs(y0 - y1);
    return 2 * width + 2 * height;
}

int Rectangle::calc_area() const

noexcept {
    auto width = std::abs(x0 - x1);
    auto height = std::abs(y0 - y1);
    return width * height;
}

void Rectangle::print_info() const

noexcept {
    using namespace std;

    auto p = calc_perimeter();
    auto a = calc_area();

    cout << "Perimeter: " << p << endl;
    cout << "Area: " << a << endl;
}

int main() {
    using namespace std;

    Rectangle rect(114, 514, 1919, 810);
    cout << "Rectangle information:" << endl;
    cout << "x0: " << rect.x0 << ", y0: " << rect.y0 << endl;
    cout << "x1: " << rect.x1 << ", y1: " << rect.y1 << endl;
    rect.print_info();

    return 0;
}