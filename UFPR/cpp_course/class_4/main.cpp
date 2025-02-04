#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "Person.hpp"
#include "Rectangle.hpp"

// int main() {
//     unsigned short i;
//     std::vector<Person> people = {
//         {"Bob", 15, 73617020151},
//         {"Alice", 20, 73617020151}
//     };

//     for (i = 0; i < 2; i++) {
//         std::cout << "People: " << people[i].getName() << "\t"
//         << std::setw(11) << std::setfill('0') << people[i].getCpf() << "\t"
//         << (unsigned short int)people[i].getAge() << '\n';
//     }
    
//     return 0;
// }

int main() {
    Rectangle rect;
    Rectangle rect2{5, 5};
    Rectangle rect3{5};

    float length, height;

    std::cout << "Insert height: ";
    std::cin >> height;
    rect.setHeight(height);

    std::cout << "Insert length: ";
    std::cin >> length;
    rect.setLength(length);

    std::cout << "Rectangle -> area: " << rect.getArea() << "\t"
    << "perimeter: " << rect.getPerimeter() << '\n';
    std::cout << "Rectangle Default -> area: " << rect2.getArea() << "\t"
    << "perimeter: " << rect2.getPerimeter() << '\n';
    std::cout << "Rectangle Default Parameter -> area: " << rect3.getArea() << "\t"
    << "perimeter: " << rect3.getPerimeter() << '\n';

    return 0;
}