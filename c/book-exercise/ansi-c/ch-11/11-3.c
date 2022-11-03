#include <stdio.h>
void input();
void display();
void update();

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
    printf("Time before update:\n");
    display();
    update();
    printf("Time after update:\n");
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

void update()
{
    t.second++;
    if(t.second == 60)
    {
        t.second = 0;
        t.minute++;
    }
    if(t.minute == 60)
    {
        t.minute = 0;
        t.hour++;
    }
    if(t.hour == 24)
    {
        t.hour = 0;
    }

}