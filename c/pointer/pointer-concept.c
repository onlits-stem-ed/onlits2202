#include <stdio.h>
int main()
{
    int a = 10;
    int *p = &a;
    printf("The value of a is %d.\n", a);
    printf("The address of a is %p.\n", &a);
    printf("The address of p is %p.\n", &p);
    printf("The content of p (address of a) is %p.\n", p);
    printf("The value (of) at which p is pointing is %d\n", *p);
    (*p) = (*p) + 10;
    printf("The new value of a is %d.\n", a);
    return 0;
}