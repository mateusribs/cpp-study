#ifndef COURSE_HPP
#define COURSE_HPP

#include <iostream>
#include <string>
#include <cstdint>

class Course {
    public:
        Course(std::string name);

        uint16_t getWorkload();
        uint16_t getCreationYear();
        std::string getName();

        void setWorkload(unsigned int workload);
        void setName(std::string name);
        void setCreationYaer(unsigned int creationYear);

    private:
        std::string name;
        uint16_t creationYear;
        uint16_t minimumWorkload{600};
};
#endif