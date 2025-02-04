#include "Rectangle.hpp"

Rectangle::Rectangle(){}

Rectangle::Rectangle(float rectLength, float rectHeight){
    setLength(rectLength);
    setHeight(rectHeight);
}

float Rectangle::getArea() {
    return height * length;
}

float Rectangle::getPerimeter() {
    return 2*height + 2*length;
}

float Rectangle::getLength() {
    return length;
}

float Rectangle::getHeight() {
    return height;
}

void Rectangle::setHeight(float new_height) {
    if (new_height > 0) {
        height = new_height;
    } else {
        height = 0;
    }
}

void Rectangle::setLength(float new_length) {
    if (new_length > 0) {
        length = new_length;
    } else {
        length = 0;
    }
}