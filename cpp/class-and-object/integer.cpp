#include <iostream>
using namespace std;

class integer
{
    int i;

public:
    void read()
    {
        cin >> i;
    }

    integer operator+(integer x)
    {
        integer t;
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
    integer a, b, c;
    cout << "Enter a number: ";
    a.read();
    cout << "Enter another number: ";
    b.read();
    c = a + b;
    cout << "The sum is " << c.display() << endl;
    return 0;
}
