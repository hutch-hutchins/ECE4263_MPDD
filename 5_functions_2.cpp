#include <iostream>

#define PI 3.1415

float areaCircle(int arg1);
float areaTriangle(int arg1, int arg2);
int areaSquare(int arg1);

int main()
{
    int x = 1;
    float y = 0.0;
    std::cout << "Enter the hight of your shape:";
    std::cin >> x;

    y = areaCircle(x);
    std::cout << "The area of your circle is:" << y << std::endl;

    y = areaSquare(x);
    std::cout << "The area of your square is:" << y << std::endl;

    y = areaTriangle(x, x);
    std::cout << "The area of your square is:" << y << std::endl;
}

float areaCircle(int arg1)
{
    return PI * (arg1 * 0.5) * (arg1 * 0.5);
}
int areaSquare(int arg1)
{
    return arg1 * arg1;
}
float areaTriangle(int arg1, int arg2)
{
    return 0.5 * arg1 * arg2;
}
