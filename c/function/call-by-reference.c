#include <stdio.h>
void increment(int *i);
int main()
{
    int i=10;
    increment(&i);
    printf("i = %d\n", i);
    return 0;
}

void increment(int *i)
{
    (*i)++;
}