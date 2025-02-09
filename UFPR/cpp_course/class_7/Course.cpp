#include "Course.hpp"
#include <iostream>
#include <string>

Course::Course(std::string name):name{name} {};

uint16_t Course::getWorkload() {
    return minimumWorkload;
}

uint16_t Course::getCreationYear() {
    return creationYear;
}

std::string Course::getName() {
    return name;
}

void Course::setName(std::string name) {
    this -> name = name;
}

void Course::setWorkload(unsigned int minimumWorkload) {
    this -> minimumWorkload = minimumWorkload;
}

void Course::setCreationYaer(unsigned int creationYear) {
    this -> creationYear = creationYear;
}