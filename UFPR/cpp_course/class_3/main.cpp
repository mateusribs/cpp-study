#include <iostream>
#include <iomanip>
#include <string>
#include "Person.hpp"
#include "Rectangle.hpp"

// int main() {
//     Person people[3];
//     unsigned short int age, i;
//     uint64_t cpf;
//     std::string name;

//     for (i = 0; i < 3; i++) {
//         std::cout << "Person " << i + 1 << " register...\n";
//         std::cout << "What's your name? ";
//         std::cin >> name;
//         people[i].setName(name);

//         std::cout << "What's your CPF? ";
//         while (true) {
//             std::cin >> cpf;
//             people[i].setCpf(cpf);
//             if (people[i].getCpf() != 0) {
//                 break;
//             }
//         }

//         std::cout << "How old are you? ";
//         std::cin >> age;
//         people[i].setAge(age);
//         std::cin.ignore();
//     }

//     for (i = 0; i < 3; i++) {
//         std::cout << "People: " << people[i].getName() << "\t"
//         << std::setw(11) << std::setfill('0') << people[i].getCpf() << "\t"
//         << (unsigned short int)people[i].getAge() << '\n';
//     }
    
//     return 0;
// }

int main() {
    Rectangle rect;

    float length, height;

    std::cout << "Insert height: ";
    std::cin >> height;
    rect.setHeight(height);

    std::cout << "Insert length: ";
    std::cin >> length;
    rect.setLength(length);

    std::cout << "Rectangle -> area: " << rect.getArea() << "\t"
    << "perimeter: " << rect.getPerimeter() << '\n';

    return 0;
}