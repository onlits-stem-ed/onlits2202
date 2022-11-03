#include <stdio.h>
int main()
{
    int n = 15, i, j, t;
    int number[] = {4, 7, 2, 4, 56, 89, 14, 1, 44, 33, 78, 26, 60, 91, 9};

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (number[i] > number[j])
            {
                t = number[i];
                number[i] = number[j];
                number[j] = t;
            }
        }
    }

    printf("The sorted array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", number[i]);
    }
}