#include <iostream>
#include <string>

class Student {
public:
    int age;
    std::string gender;
    double money;
    std::string name;

    Student(const std::string& studentName, int studentAge, const std::string& studentGender, double studentScholarship) {
        name = studentName;
        age = studentAge;
        gender = studentGender;
        money = studentScholarship;
    }

    // Функція для виведення інформації про студента
    void displayInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Gender: " << gender << std::endl;
        std::cout << "Scholarship: " << money << std::endl << std::endl;
    }
};

int main() {
    Student student1("Mykola", 18, "Man", 1200.0);

    student1.displayInfo();

    return 0;
}
