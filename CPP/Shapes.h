//Shapes Class
//Initial Declaration
//Filename: Shapes.h

#define PI 3.1415f

class CircleObject
{
public:
    float radius;

    float area()
    {
        return PI * radius * radius;
    }

    float perimeter()
    {
        return 2*PI*radius;
    }
};

class SquareObject
{
public:
    float length;

    float area()
    {
        return length * length;
    }
};