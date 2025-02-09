#include "ClassRoom.hpp"

ClassRoom::ClassRoom(std::string name, unsigned int capacity)
    :name{name}, capacity{capacity} {}

std::string ClassRoom::getName() {
    return this -> name;
}

void ClassRoom::setName(std::string name) {
    this->name = name;
}

unsigned int ClassRoom::getCapacity() {
    return this->capacity;
}

void ClassRoom::setCapacity(unsigned int capacity) {
    this->capacity = capacity;
}

void ClassRoom::addLecture(Lecture* lecture) {
    this->lectures.push_back(lecture);
}

void ClassRoom::removeLecture(Lecture* lecture) {
    this->lectures.remove(lecture);
}

std::list<Lecture*>& ClassRoom::getLectures() {
    return this->lectures;
}