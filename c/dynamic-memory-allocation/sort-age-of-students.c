#include <stdio.h>
#include <stdlib.h>

void read(int *arr, int n);
void display(int *arr, int n);
void sort(int *arr, int n);

int main()
{
    int n;
    int *arr;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    printf("Enter age of %d student(s) below:\n", n);
    read(arr, n);
    printf("\nSorting\n\n");
    sort(arr, n);
    printf("Sorted!\n\n");
    printf("The sorted array is:\n");
    display(arr, n);
    printf("\nReducing the size of array\n\n");
    printf("Enter new array size: ");
    scanf("%d", &n);
    arr = realloc(arr, n * sizeof(int));
    display(arr, n);
    free(arr);
    return 0;
}

void read(int *arr, int n)
{
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
}

void sort(int *arr, int n)
{
    int i, j, t;
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i] > arr[j])
            {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
}

void display(int *arr, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d\n", arr[i]);
    }
}