#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
} NODE;

void display(NODE **head);
void insert(NODE **head);
void delete(NODE *head);
void sort(NODE *head);
void search(NODE *head);

int main(int argc, char const *argv[])
{
    int ch;
    NODE *head = NULL;
    printf("main(): address of head: %p\n", &head);
    while (1)
    {
        printf("\nMAIN MENU\n\n");
        printf("1. Display\n");
        printf("2. Insert\n");
        printf("3. Delete\n");
        printf("4. Sort\n");
        printf("5. Search\n");
        printf("Enter choice (0 to exit): ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            exit(0);
            printf("\nBye...\n");
            break;
        case 1:
            display(&head);
            break;
        case 2:
            insert(&head);
            printf("main(): head contains %p.\n", head);
            break;
        case 3:
            // delete (arr, &size);
            break;
        case 4:
            // sort(arr, &size);
            break;
        case 5:
            // search(arr, &size);
            break;
        default:
            printf("\nInvalid option!\n\n");
        }
    }
    return 0;
}

void display(NODE **head)
{
    if(*head == NULL)
    {
        printf("\nList is empty, there is nothing to print.\n\n");
        return;
    }

    NODE *itr = *head;           //itr from iterator
    printf("\nThe list contains following elements:\n\n");
    while ((itr) != NULL)
    {
        printf("%d", (itr)->data);
        (itr) = (itr)->link;
    }
    printf("\nEnd of list.\n\n");
}

void insert(NODE **head)
{
    if((*head) == NULL)
    {
        (*head) = (NODE*)malloc(sizeof(NODE));
        printf("Enter a value: ");
        scanf("%d", &(*head)->data);
        (*head)->link = NULL;
        printf("\nData saved!\n\n");
        return;
    }


}

void delete(NODE * head)
{

}

void sort(NODE *head)
{

}

void search(NODE *head)
{

}