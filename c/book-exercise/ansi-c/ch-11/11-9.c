#include <stdio.h>
#include <stdlib.h>

struct vector
{
    int element[10];
};

void create();
void modify();
void multiply_by_scalar();
void display();

struct vector v;
int size = 0;

int main()
{
    int ch;
    printf("\tMENU\n");
    printf("1. Create vector\n");
    printf("2. Modify vector\n");
    printf("3. Multiply by scalar\n");
    printf("4. Display vector\n");
    printf("Enter choice (0 for exit): ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 0:
        exit(0);
        break;
    case 1:
        create();
        main();
        break;
    case 2:
        modify();
        main();
        break;
    case 3:
        multiply_by_scalar();
        main();
        break;
    case 4:
        display();
        main();
        break;
    default:
        printf("\nInvalid option!\n\n");
        main();
    }
}

void create()
{
    int i;
    printf("Enter number of elements (max 10): ");
    scanf("%d", &size);
    printf("Enter %d integers below:\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &v.element[i]);
    }
    printf("\nVector created!\n\n");
}

void modify()
{
    int index;
    if (size == 0)
    {
        printf("\nCreate the vector first to continue...\n\n");
        return;
    }
    printf("\nEnter index: ");
    scanf("%d", &index);
    printf("\nThe existing value is %d.\n\n", v.element[index]);
    printf("Enter the new value: ");
    scanf("%d", &v.element[index]);
    printf("\nVector updated!\n\n");
}

void multiply_by_scalar()
{
    int scalar, i;

    if (size == 0)
    {
        printf("\nCreate the vector first to continue...\n\n");
        return;
    }

    printf("\nEnter a scalar: ");
    scanf("%d", &scalar);
    for (i = 0; i < size; i++)
    {
        v.element[i] *= scalar; // means v.element[i] = v.element[i] * scalar
    }
    printf("\nMultiplication successful!\n\n");
}

void display()
{
    if (size == 0)
    {
        printf("\nCreate the vector first to continue...\n\n");
        return;
    }

    int i;
    printf("\nThe elements of vector are:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", v.element[i]);
    }
}