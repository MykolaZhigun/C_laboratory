#include <iostream>
#include <string>

class Student {
public:
    std::string name;
    int age;
    int course;
};

int main() {
    Student student1;

    std::cout << "Enter the name a student: ";
    std::cin >> student1.name;

    std::cout << "Enter age: ";
    std::cin >> student1.age;

    std::cout << "Enter course: ";
    std::cin >> student1.course;

    std::cout << "\nStudent info:" << std::endl;
    std::cout << "Name: " << student1.name << std::endl;
    std::cout << "Age: " << student1.age << std::endl;
    std::cout << "Course: " << student1.course << std::endl;

    return 0;
}
