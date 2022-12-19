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
    void putdata();
};

void notice::getdata()
{
    cout << "Creating notice ..." << endl;
    cout << "Enter the following details:" << endl;
    cout << "Issuing Authority: ";
    cin.getline(issuing_authority, 50);
    cout << "Date: ";
    cin >> date;
    cout << "Title: ";
    cin.getline(title, 50);
    cout << "Body: ";
    cin.getline(body, 500);
    cout << "Authorised Signatory: ";
    cin.getline(authorised_signatory, 50);
    cout << "Designation: ";
    cin.getline(designation, 50);
}

void notice::putdata()
{
    cout << "NOTICE" << endl;
    cout << issuing_authority << endl;
    cout << date << endl;
    cout << title << endl;
    cout << body << endl;
    cout << authorised_signatory << endl;
    cout << designation << endl;
}

int main(int argc, char const *argv[])
{
    notice n;
    n.getdata();
    n.putdata();
    return 0;
}
