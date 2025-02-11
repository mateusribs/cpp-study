#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include "Person.hpp"
#include "Lecture.hpp"
#include "Course.hpp"
#include "ClassRoom.hpp"

int main() {
    ClassRoom room1{"Lab Info 1", 20};
    ClassRoom room2{"Lab Info 2", 40};

    Course c1{"Software Engineering"};

    Lecture lect1{"OPP", c1, &room1};
    Lecture lect2{"OS", c1, &room1};

    lect1.setClassRoom(&room2);

    // room2.addLecture(&lect2);

    std::cout << lect1.getClassRoom()->getName() << '\n';
    std::list<Lecture*> lects{room1.getLectures()};
    std::list<Lecture*>::iterator it{lects.begin()};
    for (; it != lects.end(); ++it) {
        std::cout << (*it)->getName() << '\n';
    }



    return 0;
}