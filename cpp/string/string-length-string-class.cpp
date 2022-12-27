#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int len = str.length();
    cout << "The string " << str << " has " << len << " characters." << endl;
    return 0;
}