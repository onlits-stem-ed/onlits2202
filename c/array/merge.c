#include <stdio.h>
void copy(int *x, int *y);
void display(int *x, int size);
int main(int argc, char const *argv[])
{
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {6, 7, 8, 9, 10};
    int c[10], i = 0, j;
    copy(c, a);
    copy(c, b);

    printf("\nArray a:\n");
    display(a, 5);
    printf("\nArray b:\n");
    display(b, 5);
    printf("\nArray c:\n");
    display(c, 10);
    return 0;
}

void copy(int *x, int *y)
{
    static signed int j = 0;
    for (int i = 0; i < 5; i++, j++)
    {
        x[j] = y[i];
    }
}

void display(int *x, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", x[i]);
    }
}