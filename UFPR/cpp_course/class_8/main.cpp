#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include "Person.hpp"
#include "Lecture.hpp"
#include "Course.hpp"
#include "ClassRoom.hpp"

int main() {
    Course c1{"Physics"};
    ClassRoom* cr1{new ClassRoom{"Lab2", 50}};
    Lecture l1{"Dynamics", c1};
    Lecture l2{"Eletronics", c1};
    
    l1.setClassRoom(cr1);
    l2.setClassRoom(cr1);

    Person* p1{new Person{"Joao", 35, 111111111111}};
    Person* p2{new Person{"Alicia", 20, 22222222222}};
    Person* p3{new Person{"Ruben", 50, 33333333333}};

    l1.setProfessor(p3);
    l1.addStudent(p1);
    l1.addStudent(p2);

    std::cout << "Class Room: " << cr1->getName() << '\n';
    std::cout << "Lecture of this class room:" << '\n';
    std::list<Lecture*>::iterator it;
    std::list<Lecture*>& lectures = cr1->getLectures();
    for (it = lectures.begin(); it != lectures.end(); ++it) {
        std::cout << (*it)->getName() << '\n';
    }


    delete p1;
    delete p2;
    delete p3;
    delete cr1;
}