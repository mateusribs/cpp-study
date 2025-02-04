#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle {
    public:
        float getArea();
        float getPerimeter();

        float getLength();
        float getHeight();

        void setLength(float new_length);
        void setHeight(float new_height);

    private:
        float length;
        float height;
};
#endif