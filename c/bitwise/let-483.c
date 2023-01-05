/*Print binary equivalent of integers using showbits() function*/
#include <stdio.h>
#include "lib.a"

void showbits(int j);

int main(void)
{
    int j;
    for (j = 0; j <= 5; j++)
    {
        printf("\nDecimal %d is same as binary ", j);
        showbits(j);
    }
}