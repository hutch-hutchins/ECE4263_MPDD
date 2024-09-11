#include <iostream>
#include "Shapes.h"


int main()
{
    CircleObject circle_one;
    SquareObject square_one;

    square_one.length = 2;
    circle_one.radius = 2;

    std::cout << "Circle One Radius: " << circle_one.radius << std::endl;
    std::cout << "Circle One Area: " << circle_one.area() << std::endl;

    std::cout << "Square One length: " << square_one.length << std::endl;
    std::cout << "Square One Area: " << square_one.area() << std::endl;
}