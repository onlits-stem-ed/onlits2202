#include <iostream>
using namespace std;

class complex
{
    float real;
    float imaginary;

public:
    complex() // Default Constructor
    {
    }

    complex(float real, float imaginary) // Parameterized Constructor
    {
        this->real = real;              //this is known as this pointer
        this->imaginary = imaginary;
    }

    complex operator+(complex c)
    {
        complex *t = new complex();         //dynamic allocation and here *t is pointer to object
        t->real = this->real + c.real;
        t->imaginary = this->imaginary + c.imaginary;
        return *t;
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
    complex c1(11.5f, 10.6f), c2(15.7f, 20.9f), c3;     //static allocation
    c3 = c1 + c2;
    cout << "The sum is " << c3.get_real() << " + " << c3.get_imaginary() << "i" << endl;
    return 0;
}


/*
 * 
 * Line no 10 and 14 demonstrates constructor overloading which is a form of 
 * function overloading. Function overloading is a form of Polymorphism.
 * 
 * Line no 20 demonstrated the use of operator overloading which is a type of
 * Polymorphism.
 * 
 * Runtime Polymorphism - Virtual Function (Will be discussed later)
 */