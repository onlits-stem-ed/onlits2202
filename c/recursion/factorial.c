#include <stdio.h>

int factorial();

int main(int argc, char const *argv[])
{
    int n, f;
    printf("Enter a number: ");
    scanf("%d", &n);
    f = factorial(n);
    printf("The factorial of %d is %d.\n", n, f);
    return 0;
}

int factorial(int n)
{
    int f;
    if(n == 1)
        return 1;

    f = n * factorial(n-1);                            //call to itself
    return f;
}