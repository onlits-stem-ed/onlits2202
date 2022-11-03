#include <stdio.h>
int main()
{
    int n, p, i, product=1;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Enter power: ");
    scanf("%d", &p);
    for(i=1; i<=p; i++)
    {
        product = product * n;
    }
    printf("%d raised to the power %d is %d.\n", n, p, product);
    return 0;
}