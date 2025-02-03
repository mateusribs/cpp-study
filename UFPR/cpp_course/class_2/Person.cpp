#include "Person.hpp"
#include <iostream>
#include <cstdint>

bool Person::validateCPF(uint64_t cpf) {
    uint8_t digit_1, digit_2;
    uint16_t sum{0};
    uint32_t base_cpf{(uint32_t)(cpf/100)};

    digit_1 = compute_digit(base_cpf, true, sum);

    if (((cpf / 10) % 10) != digit_1) {
        std::cout << "Incorrect CPF, please try again: ";
        return false;
    }

    sum = digit_1 * 2;
    digit_2 = compute_digit(base_cpf, false, sum);

    if ((cpf % 10) != digit_2) {
        std::cout << "Incorrect CPF, please try again: ";
        return false;
    }

    return true;
}

uint8_t Person::compute_digit(uint32_t base_cpf, bool first_digit, uint16_t sum) {
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