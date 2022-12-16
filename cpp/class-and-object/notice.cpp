#include <iostream>
using namespace std;

class notice
{
    char issuing_authority[50];
    char date[11];
    char title[100];
    char body[500];
    char authorised_signatory[50];
    char designation[50];
public:
    void getdata();
};

void notice::getdata()
{
    cout << "Creating notice ..." << endl;
    cout << "Enter the following details:" << endl;
    cout << "Issuing Authority: ";
    cin >> issuing_authority;
    cout << "Date: ";
    cin >> date;
    cout << "Title: ";
    cin >> title;
    cout << "Body: ";
    cin >> body;
    cout << "Authorised Signatory: ";
    cin >> authorised_signatory;
    cout << "Designation: ";
    cin >> designation;
}



int main(int argc, char const *argv[])
{
    notice n;
    n.getdata();
    return 0;
}
