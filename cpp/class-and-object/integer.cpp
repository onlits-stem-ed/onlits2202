#include <iostream>
using namespace std;

class integer           //Demonstrating Encpasulation (the wrapping up of data and function in a single unit (called class).)
{
    int i;

public:
    integer(int i)
    {
        this->i = i;
    }

    void read()
    {
        cin >> i;
    }

    integer operator+(integer x)            //Demonstrating Operator Overloading - Polymorphism
    {
        integer t = 0;
        t.i = i + x.i;
        return t;
    }

    int display()
    {
        return i;
    }
};

int main(int argc, char const *argv[])
{
    integer a=10, b=20, c=0;                //here integer is class (user-defined data type) and a, b, c are object
    // cout << "Enter a number: ";
    // a.read();
    // cout << "Enter another number: ";
    // b.read();
    c = a + b;                                      //using overloaded operator '+'
    cout << "The sum is " << c.display() << endl;
    return 0;
}
