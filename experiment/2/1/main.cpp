#include <iostream>
#include <cmath>

class Rectangle {
protected:
    int Left, Top;
    int Right, Bottom;
public:
    Rectangle(int left, int top, int right, int bottom);
    int Diagonal();
    void Show();
};

using namespace std;

Rectangle::Rectangle(int left, int top, int right, int bottom) {
    Left = left;
    Top = top;
    Right = right;
    Bottom = bottom;
}

int Rectangle::Diagonal() {
    return sqrt(pow(Right - Left, 2) + pow(Bottom - Top, 2));
}

void Rectangle::Show() {
    int diag = Diagonal();
    cout << "左上角坐标：" << Left << ", " << Top << endl;
    cout << "右下角坐标：" << Right << ", " << Bottom << endl;
    cout << "对角线长度：" << diag << endl;
}

int main() {
    auto rect = new Rectangle(10, 10, 20, 20);
    rect->Show();
    delete rect;
    return 0;
}