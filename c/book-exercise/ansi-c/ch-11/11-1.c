#include <stdio.h>
struct time_struct     //here time_struct is known as structure tag
{
    int hour;
    int minute;
    int second;
};

int main()
{
    struct time_struct t;       //here t is structure variable
    printf("Enter hours: ");
    scanf("%d", &t.hour);
    printf("Enter minutes: ");
    scanf("%d", &t.minute);
    printf("Enter seconds: ");
    scanf("%d", &t.second);
    printf("The entered time is: %02d:%02d:%02d\n", t.hour, t.minute, t.second);
    return 0;
}