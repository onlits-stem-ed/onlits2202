#include <stdio.h>
int main()
{
    int hours, i, oh, overtime;
    for (i = 1; i <= 10; i++)
    {
        overtime = 0;
        printf("Enter hours worked for employee %d: ", i);
        scanf("%d", &hours); 
        oh = hours - 40;
        if(oh > 0)
        {
            overtime = oh * 12;
        }
    printf("Overtime of employee %d is %d hour(s) and overtime pay is rupees %d.\n\n", i, oh, overtime);
    }
    return 0;
}