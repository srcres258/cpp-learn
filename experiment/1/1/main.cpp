#include <iostream>

int max1(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int max1(int a, int b, int c) {
    return max1(max1(a, b), c);
}

double max1(double a, double b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

double max1(double a, double b, double c) {
    return max1((double) max1((double) a, b), c);
}

int main() {
    int a = 10, b = 20, c = 30;
    double d = 1.5, e = 2.5, f = 3.5;

    std::cout << "Max of " << a << ", " << b << " is " << max1(a, b) << std::endl;
    std::cout << "Max of " << d << ", " << e << " is " << max1(d, e) << std::endl;
    std::cout << "Max of " << a << ", " << b << ", " << c << " is " << max1(a, b, c) << std::endl;
    std::cout << "Max of " << d << ", " << e << ", " << f << " is " << max1(d, e, f) << std::endl;

    return 0;
}