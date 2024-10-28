#include <iostream>

int main() {
    int *arr = new int[10];

    arr[0] = -5;
    arr[1] = -4;
    arr[2] = -3;
    arr[3] = -2;
    arr[4] = -1;
    arr[5] = 0;
    arr[6] = 1;
    arr[7] = 2;
    arr[8] = 3;
    arr[9] = 4;

    unsigned int pos_count = 0, neg_count = 0;
    for (int i = 0; i < 10; i++) {
        if (arr[i] > 0) {
            pos_count++;
        } else if (arr[i] < 0) {
            neg_count++;
        }
    }

    std::cout << "正数的个数：" << pos_count << std::endl;
    std::cout << "负数的个数：" << neg_count << std::endl;

    delete[] arr;

    return 0;
}