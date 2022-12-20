#include <iostream>
#include <cstring>

#define WIDTH 80

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
    void print_center(char *s);
    void print_right(char *s);
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
    getchar();
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
    cout << endl;
    print_center("NOTICE");
    print_center(issuing_authority);
    print_right(date);
    print_center(title);
    cout << endl << body << endl << endl;
    print_right(authorised_signatory);
    print_right(designation);
}

void notice::print_center(char *s)
{
    int len = strlen(s);
    printf("%*s\n", 40 - (len / 2), s);
    printf("%d-%d\n", WIDTH, len);
}

void notice::print_right(char *s)
{
    int len = strlen(s);
    printf("%*s\n", WIDTH - len, s);
}

int main(int argc, char const *argv[])
{
    notice n;
    n.getdata();
    n.putdata();
    return 0;
}
