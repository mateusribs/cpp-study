#ifndef PERSON_HPP
#define PERSON_HPP

#include <cstdint>

class Person {
    public:
        bool validateCPF(uint64_t cpf);
        uint8_t compute_digit(uint32_t base_cpf, bool first_digit, uint16_t sum);

        char name[50];
        uint64_t cpf;
        uint8_t age;
};
#endif