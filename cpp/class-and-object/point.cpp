#include <iostream>
using namespace std;

class point
{
    float x;
    float y;

public:
    point()         //default constructor
    {

    }

    point(float x, float y)     //parameterized constructor
    {
        this->x = x;
        this->y = y;
    }

    point operator+(point p2)
    {
        point p3;
        p3.x = this->x + p2.x;
        p3.y = this->y + p2.y;
        return p3;
    }

    void display(char const *name)
    {
        cout << name << "(" << x << "," << y << ")" << endl;
    }
};

int main(int argc, char const *argv[])
{
    point p1 = point(10, 20);           //explicit call to constructor
    point p2(20, 30);                   //implicit call to constructor
    point p3;
    p3 = p1 + p2;
    p1.display("p1");
    p2.display("p2");
    p3.display("p3");
    return 0;
}

/*
    Here point is user-defined data type
    and p1, p2, p3 are object of class point.
*/
