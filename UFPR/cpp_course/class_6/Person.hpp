#ifndef PERSON_HPP
#define PERSON_HPP

#include <cstdint>
#include <string>

class Person {
    public:
        Person(std::string name, uint8_t age, uint64_t cpf);

        unsigned long getCpf();
        std::string getName();
        unsigned short int getAge();
        void setCpf(unsigned long cpf);
        void setName(std::string name);
        void setAge(unsigned short int age);
    
    private:
        bool validateCPF(unsigned long _cpf);
        unsigned short int compute_digit(uint32_t base_cpf, bool first_digit, uint16_t sum);

        std::string name;
        uint64_t cpf;
        uint8_t age;
};
#endif