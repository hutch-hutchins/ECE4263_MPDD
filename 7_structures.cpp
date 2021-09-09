#include <iostream>

struct Circle
{
    float radius;
} circle;

int main()
{
    struct Circle circle_one;

    circle_one.radius = 2;

    std::cout << "Circle Radius is: " << circle_one.radius << std::endl;
}
