#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    int roll_no;
    char name[50];
    char gender;
} STUDENT;

void display(STUDENT *students, int *size);
void insert(STUDENT *students, int *size);

int main(int argc, char const *argv[])
{
    STUDENT students[10];
    int size = 0, ch;

    while (1)
    {
        printf("\nMAIN MENU\n\n");
        printf("1. Display\n");
        printf("2. Insert\n");
        printf("Enter choice (0 to exit): ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            exit(0);
            printf("\nBye...\n");
            break;
        case 1:
            display(students, &size);
            break;
        case 2:
            insert(students, &size);
            break;
        default:
            printf("\nInvalid option!\n\n");
        }
    }

    return 0;
}

void display(STUDENT *students, int *size)
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
        printf("%d\t%s\n", students[i].roll_no, students[i].name);
    }
    printf("\nEnd of list!\n\n");
}

void insert(STUDENT *students, int *size)
{
    printf("Enter roll number: ");
    scanf("%d%*c", &students[*size].roll_no);
    printf("Enter student name: ");
    scanf("%[^\n]%*c", students[*size].name);
    printf("Enter gender: ");
    scanf("%c", &students[*size].gender);
    (*size)++;
    printf("\nNew student data inserted!\n\n");
}