#include <stdio.h>
int main()
{
    int C, D, T;
    printf("Enter the value of C: ");
    scanf("%d", &C);
    printf("Enter the value of D: ");
    scanf("%d", &D);
    T = C;
    C = D;
    D = T;
    printf("The value of C and D after interchanging are %d and %d, respectively.\n", C, D);
    return 0;
}