#include <stdio.h>

typedef struct vector
{
    int element[10];
} VECTOR;

void create(VECTOR *v, int size);
void display(VECTOR *v, int size);

int main()
{
    VECTOR v1, v2, v3;
    create(&v1, 5);
    create(&v2, 5);

    v3 = sum(&v1, &v2, 5);

    printf("\nThe elements of vector v1 are:\n");
    display(&v1, 5);
    printf("\nThe elements of vector v2 are:\n");
    display(&v2, 5);
    printf("\nThe elements of vector v3 are:\n");
    display(&v3, 5);
}

void create(VECTOR *v, int size)
{
    int i;
    printf("Enter %d integers below:\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &v->element[i]);
    }
    printf("\nVector created!\n\n");
}

VECTOR sum(VECTOR *v1, VECTOR *v2, int size)
{
    int i;
    VECTOR v3;
    for(i=0; i<size; i++)
    {
        v3.element[i] = v1->element[i]  + v2->element[i];
    }
    return v3;          //Advantage of structure
}

void display(VECTOR *v, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d\n", v->element[i]);
    }
}