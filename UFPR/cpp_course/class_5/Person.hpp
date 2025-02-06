#ifndef PERSON_HPP
#define PERSON_HPP

#include <cstdint>
#include <string>

class Person {
    public:
        Person(std::string personName, uint8_t personAge, uint64_t personCpf);

        unsigned long getCpf();
        std::string getName();
        unsigned short int getAge();
        void setCpf(unsigned long new_cpf);
        void setName(std::string new_name);
        void setAge(unsigned short int new_age);
    
    private:
        bool validateCPF(unsigned long _cpf);
        unsigned short int compute_digit(uint32_t base_cpf, bool first_digit, uint16_t sum);

        std::string name;
        uint64_t cpf;
        uint8_t age;
};
#endif