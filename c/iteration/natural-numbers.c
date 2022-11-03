#include <stdio.h>
int main()
{
    int n, i=1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Natural number upto %d are:\n", n);
    while(i<=n)
    {
        printf("%d ", i);
        i++;        //i=i+1 or i += 1
    }
    printf("\n");
    return 0;
}