#include "Console.hpp"
#include <iostream>

void Console::showLectureInfo(Lecture& lecture) {
    std::cout << "Lecture: " << lecture.getName() << '\n'; 
}