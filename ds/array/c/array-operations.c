#include <stdio.h>
#include <stdlib.h>

void display(int *arr, int *size);
void insert(int *arr, int *size);
void delete (int *arr, int *size);
void sort(int *arr, int *size);
void search(int *arr, int *size);
void merge(int *arr, int *size);

int main()
{
    int arr[100], size = 0, ch;

    while (1)
    {
        printf("\nMAIN MENU\n\n");
        printf("1. Display\n");
        printf("2. Insert\n");
        printf("3. Delete\n");
        printf("4. Sort\n");
        printf("5. Search\n");
        printf("6. Merge\n");
        printf("Enter choice (0 to exit): ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            exit(0);
            printf("\nBye...\n");
            break;
        case 1:
            display(arr, &size);
            break;
        case 2:
            insert(arr, &size);
            break;
        case 3:
            delete (arr, &size);
            break;
        case 4:
            sort(arr, &size);
            break;
        case 5:
            search(arr, &size);
            break;
        default:
            printf("\nInvalid option!\n\n");
        }
    }
    return 0;
}

void display(int *arr, int *size) // traversal     //O(n)
{
    int i;

    if (*size == 0)
    {
        printf("\nArray empty, nothing to print!\n\n");
        return;
    }

    printf("\nThe list contains:\n\n");
    for (i = 0; i < *size; i++)
    {
        printf("%2d. %5d\n", i, arr[i]);
    }
    printf("\nEnd of list!\n\n");
}

void insert(int *arr, int *size) // O(1)
{
    printf("\nEnter value: ");
    scanf("%d", &arr[*size]);
    (*size)++;
    printf("\nValue insterted!\n\n");
}

void delete (int *arr, int *size)
{
    if (*size == 0)
    {
        printf("\nArray empty, nothing to delete!\n\n");
        return;
    }

    (*size)--;
    printf("\nValue deleted!\n\n");
}

void sort(int *arr, int *size)
{
    for (int i = 0; i < *size - 1; i++)
    {
        for (int j = i + 1; j < *size; j++)
        {
            if (arr[i] > arr[j])
            {
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    printf("\nArray Sorted!\n\n");
}

void search(int *arr, int *size)
{
    int val, status = 0;
    if (*size == 0)
    {
        printf("\nArray empty, nothing to search!\n\n");
        return;
    }

    printf("\nEnter value to search: ");
    scanf("%d", &val);

    for (int i = 0; i < *size; i++)
    {
        if (arr[i] == val)
        {
            status = 1;
            break;
        }
    }

    if (status == 1)
    {
        printf("\n%d found at the following indices:\n", val);
        for (int i = 0; i < *size; i++)
        {
            if (arr[i] == val)
            {
                printf("%d\n", i);
            }
        }
    }
    else
    {
        printf("\n%d not found in the array\n\n", val);
    }
    printf("\nSearch completed!\n\n");
}

void merge(int *arr, int *size)
{
    
}