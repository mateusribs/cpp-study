#ifndef CLASS_ROOM_HPP
#define CLASS_ROOM_HPP

#include <string>
#include <list>
#include "Lecture.hpp"

class ClassRoom {
    friend void Lecture::setClassRoom(ClassRoom* classRoom);

    public:
        ClassRoom(std::string name, unsigned int capacity);

        std::string getName();
        void setName(std::string name);

        unsigned int getCapacity();
        void setCapacity(unsigned int capacity);

        void addLecture(Lecture* lecture);
        std::list<Lecture*>& getLectures();
    
    private:
        std::string name;
        unsigned int capacity;
        std::list<Lecture*> lectures;
};
#endif