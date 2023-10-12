#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;
    int course;

public:
    // Метод-геттер для імені студента
    std::string getName() const {
        return name;
    }

    // Метод-сеттер для імені студента
    void setName(const std::string& n) {
        name = n;
    }

    // Метод-геттер для віку студента
    int getAge() const {
        return age;
    }

    // Метод-сеттер для віку студента
    void setAge(int a) {
        age = a;
    }

    // Метод-геттер для курсу студента
    int getCourse() const {
        return course;
    }

    // Метод-сеттер для курсу студента
    void setCourse(int c) {
        course = c;
    }
};

int main() {
    Student student1;

    // Встановлення значення ім'я через метод-сеттер
    student1.setName("Ivan Petrovich");

    // Встановлення значення віку через метод-сеттер
    student1.setAge(20);

    // Встановлення значення курсу через метод-сеттер
    student1.setCourse(2);

    // Виведення інформації про студента через метод-геттери
    std::cout << "Name: " << student1.getName() << std::endl;
    std::cout << "Age: " << student1.getAge() << std::endl;
    std::cout << "Course: " << student1.getCourse() << std::endl;

    return 0;
}
