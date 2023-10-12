#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;
    char gender;
    double scholarship;

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

    // Метод-геттер для статі студента
    char getGender() const {
        return gender;
    }

    // Метод-сеттер для статі студента
    void setGender(char g) {
        gender = g;
    }

    // Метод-геттер для стипендії студента
    double getScholarship() const {
        return scholarship;
    }

    // Метод-сеттер для стипендії студента
    void setScholarship(double s) {
        scholarship = s;
    }
};

int main() {
    Student student1;
    student1.setName("Ivan Petrovich");
    student1.setAge(20);
    student1.setGender('M');
    student1.setScholarship(1000.0);

    Student student2;
    student2.setName("Olha Ivanivna");
    student2.setAge(19);
    student2.setGender('F');
    student2.setScholarship(1200.0);

    // Виведення інформації про першого студента через методи-геттери
    std::cout << "Information 1 student:" << std::endl;
    std::cout << "Name: " << student1.getName() << std::endl;
    std::cout << "Age: " << student1.getAge() << std::endl;
    std::cout << "Gender: " << student1.getGender() << std::endl;
    std::cout << "Scholarship: " << student1.getScholarship() << std::endl;

    // Виведення інформації про другого студента через методи-геттери
    std::cout << "\nInformation 2 student:" << std::endl;
    std::cout << "Name: " << student2.getName() << std::endl;
    std::cout << "Age: " << student2.getAge() << std::endl;
    std::cout << "Gender: " << student2.getGender() << std::endl;
    std::cout << "Scholarship: " << student2.getScholarship() << std::endl;

    // Обчислення середнього віку та сумарної стипендії
    double averageAge = (student1.getAge() + student2.getAge()) / 2.0;
    double totalScholarship = student1.getScholarship() + student2.getScholarship();

    std::cout << "\nSumary age students: " << averageAge << std::endl;
    std::cout << "Sumary scholarship students: " << totalScholarship << std::endl;

    return 0;
}
