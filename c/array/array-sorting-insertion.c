#include <stdio.h>
int main()
{
    int n = 15, i, j, key;
    int number[] = {4, 7, 2, 4, 56, 89, 14, 1, 44, 33, 78, 26, 60, 91, 9};

    for (i = 1; i < n; i++)
    {
        key = number[i];
        j = i - 1;

        while (j >= 0 && key >= number[j])
        {
            number[j + 1] = number[j];
            j--;
        }

        number[j + 1] = key;
    }

    printf("The sorted array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", number[i]);
    }

    return 0;
}