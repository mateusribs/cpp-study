#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "Person.hpp"
#include "Lecture.hpp"

int main() {
    Lecture l1{"Physics"};
    Person* p1{new Person{"Joao", 35, 11111111111}};
    Person* p2{new Person{"Alicia", 20, 111111111111}};
    Person* p3{new Person{"Ruben", 50, 11111111111}};

    l1.setProfessor(p3);
    l1.addStudent(p1);
    l1.addStudent(p2);

    std::cout << "Professor:" << '\t' << 
    l1.getProfessorName() << '\n';

    Person** students = l1.getStudents();

    for (uint8_t i = 0; i < 50; i++) {
        if (students[i] != nullptr) {
            std::cout << "Student:" << '\t' << 
            students[i] -> getName() << '\n';
        }
    }

    delete p1;
    delete p2;
    delete p3;
}