#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, a[10];

    printf("How many numbers you want to accept (max 10): ");
    scanf("%d", &n);

    if(n>10)                //input validation (do not allow garbage to enter your program)
    {
        printf("Limit exceeded: Maximum input size can be 10.\n");
        exit(0);
    }

    printf("Enter %d integers below:\n", n);
    for(i=0; i<n; i++)          //array input
    {
        scanf("%d", &a[i]);
    }

    printf("\nThe entered integers are as follows:\n");
    for(i=0; i<n; i++)          //array output
    {
        printf("%d\n", a[i]);
    }
    return 0;
}