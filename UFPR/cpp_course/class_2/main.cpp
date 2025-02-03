#include <iostream>
#include <iomanip>
#include "Person.hpp"

int main() {
    Person people[3];
    uint8_t i;
    int age;
    bool valid;

    for (i = 0; i < 3; i++) {
        std::cout << "Person " << i + 1 << " register...\n";
        std::cout << "What's your name? ";
        std::cin >> people[i].name;

        std::cout << "What's your CPF? ";
        valid = false;
        while (!valid) {
            std::cin >> people[i].cpf;
            valid = people[i].validateCPF(people[i].cpf);
        }

        std::cout << "How old are you? ";
        std::cin >> age;
        people[i].age = age;
        std::cin.ignore();
    }

    for (i = 0; i < 3; i++) {
        std::cout << "People: " << people[i].name << "\t"
        << std::setw(11) << std::setfill('0') << people[i].cpf << "\t"
        << (unsigned short int)people[i].age << '\n';
    }
    
    return 0;
}