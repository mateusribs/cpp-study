#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include "Person.hpp"
#include "Lecture.hpp"
#include "Course.hpp"

int main() {
    Course c1{"Physics"};
    Lecture l1{"Dynamics", c1};
    Person* p1{new Person{"Joao", 35, 111111111111}};
    Person* p2{new Person{"Alicia", 20, 111111111111}};
    Person* p3{new Person{"Ruben", 50, 11111111111}};

    l1.setProfessor(p3);
    l1.addStudent(p1);
    l1.addStudent(p2);

    std::cout << "Course:" << '\t' << l1.getCourse().getName() << '\n';
    std::cout << "Professor:" << '\t' << 
    l1.getProfessorName() << '\n';

    
    std::map<unsigned long, Person*> students = l1.getStudents();
    std::map<unsigned long, Person*>::iterator it{students.begin()};

    for (; it != students.end(); ++it) {
        std::cout << "CPF" << '\t' << it -> first
        << '\t' << it -> second->getName() << '\n';
    }

    std::cout << "Removing student 1..." << '\n';
    l1.removeStudent(p1);
    l1.addStudent(p2);

    students = l1.getStudents();

    for (it = students.begin(); it != students.end(); ++it) {
        std::cout << "CPF" << '\t' << it -> first
        << '\t' << it -> second->getName() << '\n';
    }


    delete p1;
    delete p2;
    delete p3;
}