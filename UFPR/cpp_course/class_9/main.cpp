#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <list>
#include "Person.hpp"
#include "Lecture.hpp"
#include "Course.hpp"
#include "ClassRoom.hpp"
#include "Content.hpp"

int main() {
    ClassRoom room1{"Lab Info 1", 20};
    ClassRoom room2{"Lab Info 2", 40};

    Course c1{"Software Engineering"};

    Lecture lect1{"OPP", c1, &room1};
    Lecture lect2{"OS", c1, &room1};

    lect1.setClassRoom(&room2);

    std::cout << lect1.getClassRoom()->getName() << '\n';
    std::list<Lecture*>& lects{room1.getLectures()};
    std::list<Lecture*>::iterator it{lects.begin()};
    for (; it != lects.end(); ++it) {
        std::cout << (*it)->getName() << '\n';
    }

    lect1.addContent("Pointers", 4);
    lect1.addContent("Classes", 8);
    lect1.addContent("Dependency", 3);

    std::list<Content*>& contents{lect1.getContents()};
    std::list<Content*>::iterator it2{contents.begin()};

    for (; it2 != contents.end(); ++it2) {
        std::cout << (*it2)->getDescription() << '\t' << (*it2)->getId() << '\n';
    }

    lect1.removeContentById(1);

    for (it2 = contents.begin(); it2 != contents.end(); ++it2) {
        std::cout << (*it2)->getDescription() << '\t' << (*it2)->getId() << '\n';
    }

    lect1.cleanContents();

    for (it2 = contents.begin(); it2 != contents.end(); ++it2) {
        std::cout << (*it2)->getDescription() << '\t' << (*it2)->getId() << '\n';
    }

    return 0;
}