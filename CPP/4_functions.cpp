#include <iostream>


int multiplyByTwo(int arg1);


int main()
{
    int x = 1;
    std::cout << "Enter a number:";
    std::cin >> x;

    x = multiplyByTwo(x);

    std::cout << "Two times your number is:" << x << std::endl;
}


int multiplyByTwo(int arg1)
{
    return arg1*2;
}