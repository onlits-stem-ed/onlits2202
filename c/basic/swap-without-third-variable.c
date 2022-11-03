#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The values of a and b after swapping are %d and %d, respectively.\n", a, b);
    return 0;
}