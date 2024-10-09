#ifndef __MAIN_H__
#define __MAIN_H__

#include <string>

enum class Sex {
    MALE = 0,
    FEMALE = 1
};

class Person {
public:
    std::string name;
    Sex sex;
    unsigned int born_year;
    unsigned int born_month;
};

class Student : public Person {
public:
    std::string clazz;
    std::string id;
    std::string major;
    unsigned int english_mark;
    unsigned int math_mark;

    void print_info() const noexcept;
};

class Employee : public Person {
public:
    std::string bureau;
    std::string job;
    unsigned int wage;

    void print_info() const noexcept;
};

#endif