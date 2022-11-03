#include <stdio.h>
int main()
{
    int i, j;
    for(i=1; i<=9; i++)
    {
        for(j=i; j<=9; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}