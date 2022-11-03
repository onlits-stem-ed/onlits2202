#include <stdio.h>
int main()
{
    int c=0;
    while(c<=255)
    {
        printf("%d\t%c\n", c, c);
        c++;
    }
    return 0;
}