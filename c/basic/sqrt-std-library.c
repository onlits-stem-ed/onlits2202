#include <stdio.h>
int main()
{
    float n, sq;
    printf("Enter a number: ");
    scanf("%f", &n);
    sq = sqrt(n);           //Returning a value
    printf("The square root of %f is %f.\n", n, sq);
    return 0;
}