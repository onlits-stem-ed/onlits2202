#include <stdio.h>
void input();
void display();

struct time_struct // here time_struct is known as structure tag
{
    int hour;
    int minute;
    int second;
};

struct time_struct t; // here t is structure variable

int main()
{
    input();
    display();
    return 0;
}

void input()
{
    printf("Enter hours: ");
    scanf("%d", &t.hour);
    printf("Enter minutes: ");
    scanf("%d", &t.minute);
    printf("Enter seconds: ");
    scanf("%d", &t.second);
}

void display()
{
    printf("The entered time is: %02d:%02d:%02d\n", t.hour, t.minute, t.second);
}