#include <iostream>
using namespace std;

class complex
{
    float real;
    float imaginary;

public:
    complex()                   // Default Constructor
    {

    }

    complex(float real, float imaginary)        // Parameterized Constructor
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    complex operator+(complex c)
    {
        complex t;
        t.real = this->real + c.real;
        t.imaginary = this->imaginary + c.imaginary;
        return t;
    }

    float get_real()
    {
        return this->real;
    }

    float get_imaginary()
    {
        return this->imaginary;
    }

};

int main(int argc, char const *argv[])
{
    complex c1 (11.5f, 10.6f), c2 (15.7f, 20.9f), c3;
    c3 = c1 + c2;
    cout << "The sum is " << c3.get_real() << " + " << c3.get_imaginary() << "i" << endl;
    return 0;
}

