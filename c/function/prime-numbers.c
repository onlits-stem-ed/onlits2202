#include <stdio.h>
int factors(int n);         //function declaration/prototype

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(factors(n) > 2)          //function call
    {
        printf("%d is composite\n", n);
    }
    else if(factors == 2)
    {
        printf("%d is prime\n", n);
    }
    else
    {
        printf("%d is niether prime not composite.\n");
    }
    return 0;
}


//--------------- function definition/implementation ------------------
int factors(int n)      //function header
//------function body------
{
    int i, count=0;         //local variable declaration
    for(i = 1; i<=n; i++)
    {
        if(n % i == 0)      //function statements
        {
            count++;
        }
    }
    return count;
}

/*
    1. function name    -   factors
    2. function type    -   int
    3. list of paramenter - int n
*/