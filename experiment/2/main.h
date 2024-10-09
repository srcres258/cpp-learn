#ifndef __MAIN_H__
#define __MAIN_H__

class Rectangle {
protected:
    int Left, Top;
    int Right, Bottom;
public:
    Rectangle(int left, int top, int right, int bottom);
    int Diagonal();
    void Show();
};

#endif // __MAIN_H__