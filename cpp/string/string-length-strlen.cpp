#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
    char str[100];
    int len;
    cout << "Enter a string: ";
    cin.getline(str, 100);
    len = strlen(str);
    cout << "The string " << str << " has " << len << " characters." << endl;
    return 0;
}