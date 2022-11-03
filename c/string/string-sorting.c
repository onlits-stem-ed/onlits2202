#include <stdio.h>
#include <string.h>
int main()
{
    char cities[5][50], temp[50];
    int i, j;
    printf("Enter names of 5 cities below:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%[^\n]%*c", cities[i]);
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5 - 1; j++)
        {
            if (strcmp(cities[j], cities[j + 1]) > 0)
            {
                strcpy(temp, cities[j]);
                strcpy(cities[j], cities[j + 1]);
                strcpy(cities[j + 1], temp);
            }
        }
    }

    printf("\nThe list of cities is:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s\n", cities[i]);
    }
    return 0;
}