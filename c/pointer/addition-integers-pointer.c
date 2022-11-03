#include <stdio.h>
int main()
{
    int a, b, c;
    int *x, *y, *z;
    x = &a;
    y = &b;
    z = &c;
    printf("Enter a number: ");
    scanf("%d", x);
    printf("Enter another number: ");
    scanf("%d", y);
    (*z) = (*x) + (*y);
    printf("The sum is %d.\n", (*z));
    return 0;
}