#include <iostream>
#include <string>

class Student {
public:
    // Конструктор за замовчуванням
    Student() {
        name = "";
        age = 0;
        course = 0;
    }

    // Конструктор з параметрами
    Student(std::string n, int a, int c) {
        name = n;
        age = a;
        course = c;
    }

    // Деструктор (якщо потрібно)
    ~Student() {
    }

    // Функція для виводу інформації про студента
    void displayInfo() {
        std::cout << "Information Student:" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Course: " << course << std::endl;
    }

private:
    std::string name;
    int age;
    int course;
};

int main() {
    // Створення студента з використанням конструктора з параметрами
    Student student1("Ivan Petrovich", 20, 2);

    // Виведення інформації про студента
    student1.displayInfo();

    return 0;
}
