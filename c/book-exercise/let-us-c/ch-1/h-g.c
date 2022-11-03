/*
    Demonstrating with test case n = 12345
*/

#include <stdio.h>
int main()
{
    int n, d, sum;
    printf("Enter a 5-digit number: ");
    scanf("%d", &n);            //n = 12345
    
    d = n % 10;                 //d = 5
    sum = d;                    //sum = 5
    n = n / 10;                 //n = 1234

    d = n % 10;                 //d = 4
    sum = sum + d;              //sum = 5 + 4 = 9
    n = n / 10;                 //n = 123

    d = n % 10;                 //d = 3
    sum = sum + d;              //sum = 9 + 3 = 12
    n = n / 10;                 //n = 12

    d = n % 10;                 //d = 2
    sum = sum + d;              //sum = 12 + 2 = 14
    n = n / 10;                 //n = 1

    d = n % 10;                 //d = 1
    sum = sum + d;              //sum = 14 + 1 = 15
    n = n / 10;                 //n = 0

    printf("The sum is %d.\n", sum);
    return 0;
}