#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("The values of a and b after swapping are %d and %d, respectively.\n", a, b);
    return 0;
}