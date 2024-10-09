#include <iostream>

using namespace std;

#include "main.h"

void Student::print_info() const

noexcept {
    cout << "Student" << endl;

    cout << "Name: " << name << endl;
    if (sex == Sex::FEMALE) {
        cout << "Sex: Female" << endl;
    } else {
        cout << "Sex: Male" << endl;
    }

    cout << "Class: " << clazz << endl;
    cout << "ID: " << id << endl;
    cout << "Major: " << major << endl;
    cout << "English mark: " << english_mark << endl;
    cout << "Math mark: " << math_mark << endl;

    cout << "--------------------" << endl;
}

void Employee::print_info() const

noexcept {
    cout << "Employee" << endl;

    cout << "Name: " << name << endl;
    if (sex == Sex::FEMALE) {
        cout << "Sex: Female" << endl;
    } else {
        cout << "Sex: Male" << endl;
    }

    cout << "Bureau: " << bureau << endl;
    cout << "Job: " << job << endl;
    cout << "Wage: " << wage << endl;

    cout << "--------------------" << endl;
}

int main() {
    Student s;
    s.name = "李田所";
    s.sex = Sex::MALE;
    s.born_year = 1145;
    s.born_month = 1;

    s.clazz = "14班";
    s.id = "1919810";
    s.major = "沼气专业";
    s.english_mark = 114;
    s.math_mark = 514;

    s.print_info();

    Employee e;
    e.name = "淳平";
    e.sex = Sex::MALE;
    e.born_year = 1919;
    e.born_month = 8;

    e.bureau = "ACCEED";
    e.job = "餐厅服务员";
    e.wage = 114514;

    e.print_info();

    return 0;
}