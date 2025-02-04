#include "Person.hpp"
#include <iostream>
#include <cstdint>
#include <string>

Person::Person(std::string personName, uint8_t personAge, uint64_t personCpf)
    :name{personName} {
        setAge(personAge);
        setCpf(personCpf);
    }

unsigned long Person::getCpf(){
    return cpf;
}

std::string Person::getName() {
    return name;
}

unsigned short int Person::getAge() {
    return age;
}

void Person::setCpf(unsigned long new_cpf){
    if (validateCPF(new_cpf)) {
        cpf = new_cpf;
    } else {
        cpf = 0;
    }
}

void Person::setName(std::string new_name) {
    name = new_name;
}

void Person::setAge(unsigned short int new_age) {
    age = new_age;
}

bool Person::validateCPF(unsigned long _cpf) {
    uint8_t digit_1, digit_2;
    uint16_t sum{0};
    uint32_t base_cpf{(uint32_t)(_cpf/100)};

    digit_1 = compute_digit(base_cpf, true, sum);

    if (((_cpf / 10) % 10) != digit_1) {
        std::cout << "Incorrect CPF, please try again: ";
        return false;
    }

    sum = digit_1 * 2;
    digit_2 = compute_digit(base_cpf, false, sum);

    if ((_cpf % 10) != digit_2) {
        std::cout << "Incorrect CPF, please try again: ";
        return false;
    }

    return true;
}

unsigned short int Person::compute_digit(uint32_t base_cpf, bool first_digit, uint16_t sum) {
    unsigned short int aux, digit, rest, i;

    if (first_digit) {
        aux = 2;
    } else  {
        aux = 3;
    }

    for (i = 2; i < 11; i++) {
        sum += (base_cpf % 10) * aux;
        base_cpf /= 10;
        aux++;
    }

    rest = sum % 11;

    if (rest < 2) {
        digit = 0;
    } else {
        digit = 11 - rest;
    }

    return digit;
}