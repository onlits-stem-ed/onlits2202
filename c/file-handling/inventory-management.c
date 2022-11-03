#include <stdio.h>
#include <stdlib.h>

#define FILENAME "inventory.dat"

typedef struct stock_item
{
    int product_code;
    char product_name[50];
    float cost;
    int no_items_available;
} ITEM;

void menu();
void new_item();
void search_item();
void edit_item();
void delete_item();
void list_items();

ITEM s;

int main()
{
    menu();
    return 0;
}

void menu()
{
    int ch;
    while (1)
    {
        printf("\tMENU\n\n");
        printf("1. New Item\n");
        printf("2. Search Item\n");
        printf("3. Edit Item\n");
        printf("4. Delete Item\n");
        printf("5. List Items\n");
        printf("Enter choice (0 to exit): ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            printf("\nBye! Have a good day!\n\n");
            exit(0);
            break;
        case 1:
            new_item();
            break;
        case 2:
            search_item();
            break;
        case 3:
            edit_item();
            break;
        case 4:
            delete_item();
            break;
        case 5:
            list_items();
            break;
        default:
            printf("\nInvalid option!\n\n");
        }
    }
}

void new_item()
{
    FILE *fp;
    fp = fopen(FILENAME, "a");
    printf("\nEnter product code: ");
    scanf("%d%*c", &s.product_code);
    printf("Enter product name: ");
    scanf("%[^\n]", s.product_name);
    printf("Enter product cost: ");
    scanf("%f", &s.cost);
    printf("Enter number of available items: ");
    scanf("%d", &s.no_items_available);

    fprintf(fp, "%d,%s,%1.2f,%d,\n", s.product_code, s.product_name, s.cost, s.no_items_available);

    fclose(fp);
    printf("\nItem added to inventory\n\n");
}

void search_item()
{
    printf("\n...Under construction\n\n");
}

void edit_item()
{
    printf("\n...Under construction\n\n");
}

void delete_item()
{
    printf("\n...Under construction\n\n");
}

void list_items()
{
    FILE *fp;
    fp = fopen(FILENAME, "r");
    printf("\n\n\t\t\t\tITEM LIST\n\n");
    printf("%-15s%-30s%10s%10s\n", "Product Code", "Product Name", "Cost", "Quantity");
    while (!feof(fp))
    {
        fscanf(fp, "%d,%[^,],%f,%d,\n", &s.product_code, s.product_name, &s.cost, &s.no_items_available);
        printf("%-15d%-30s%10f%10d\n", s.product_code, s.product_name, s.cost, s.no_items_available);
    }
    printf("\n\n");
    fclose(fp);
}
