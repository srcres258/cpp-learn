#include <iostream>
#include <vector>

class Student {
public:
    static void print_info(
        const std::vector<Student> &students
    ) noexcept;
    static float total_mark(
        const std::vector<Student> &students
    ) noexcept;
    static float average_mark(
        const std::vector<Student> &students
    ) noexcept;
    static float highest_mark(
        const std::vector<Student> &students
    ) noexcept;
    static float lowest_mark(
        const std::vector<Student> &students
    ) noexcept;

    std::string name;
    std::string id;
    float mark;

    Student();
    Student(
        const std::string &name,
        const std::string &id,
        const float mark
    );
};

Student::Student() : name(""), id(""), mark(0.0) {}

Student::Student(
    const std::string &name,
    const std::string &id,
    const float mark
) : name(name), id(id), mark(mark) {}

void Student::print_info(
    const std::vector<Student> &student
) noexcept {
    using namespace std;

    for (const auto &s : student) {
        cout << "Student information" << endl;
        cout << "Name: " << s.name << endl;
        cout << "ID: " << s.id << endl;
        cout << "Mark: " << s.mark << endl;
        cout << "----------" << endl;
    }
}

float Student::total_mark(
    const std::vector<Student> &students
) noexcept {
    float sum = 0.0;
    for (const auto &s : students) {
        sum += s.mark;
    }
    return sum;
}

float Student::average_mark(
    const std::vector<Student> &students
) noexcept {
    return total_mark(students) / students.size();
}

float Student::highest_mark(
    const std::vector<Student> &students
) noexcept {
    float highest = students[0].mark;
    for (const auto &s : students) {
        if (s.mark > highest) {
            highest = s.mark;
        }
    }
    return highest;
}

float Student::lowest_mark(
    const std::vector<Student> &students
) noexcept {
    float lowest = students[0].mark;
    for (const auto &s : students) {
        if (s.mark < lowest) {
            lowest = s.mark;
        }
    }
    return lowest;
}

int main() {
    using namespace std;

    vector<Student> students;

    students.push_back(Student("Alice", "A001", 85.0));
    students.push_back(Student("Bob", "B002", 92.0));
    students.push_back(Student("Charlie", "C003", 78.0));
    students.push_back(Student("David", "D004", 89.0));
    students.push_back(Student("Eve", "E005", 95.0));

    Student::print_info(students);

    cout << "Total mark: " << Student::total_mark(students) << endl;
    cout << "Average mark: " << Student::average_mark(students) << endl;
    cout << "Highest mark: " << Student::highest_mark(students) << endl;
    cout << "Lowest mark: " << Student::lowest_mark(students) << endl;

    return 0;
}
