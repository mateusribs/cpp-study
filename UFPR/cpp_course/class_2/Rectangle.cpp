#include "Rectangle.hpp"

float Rectangle::area() {
    return height * length;
}

float Rectangle::perimeter() {
    return 2*height + 2*length;
}