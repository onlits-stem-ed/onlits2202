#include <stdio.h>
#define SIZE 25
int main()
{
    int numbers[SIZE], i, search_value, count=0;
    printf("Enter %d numbers below:\n", SIZE);
    for(i=0; i<SIZE; i++)
    {
        scanf("%d", &numbers[i]);
    }

    printf("Enter the value to search: ");
    scanf("%d", &search_value);

    for(i=0; i<SIZE; i++)
    {
        if(numbers[i] == search_value)
        {
            count++;
        }
    }

    if(count>0)
    {
        printf("There were %d occurances of %d.\n", count, search_value);
    }
    else
    {
        printf("%d not found.\n", search_value);
    }
    return 0;
}