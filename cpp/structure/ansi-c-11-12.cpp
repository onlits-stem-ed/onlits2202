#include <stdio.h>
#include <string.h>

struct census // details of new variable of type census
{
    char city[50];
    long population;
    float literacy_level;

    void read();
};

void display();
void sort_city();
void sort_literacy_level();
void sort_population();
void print_dash(int n);
void print_row();

struct census c[5];

int main()
{
    printf("Enter the census details of 5 cities below:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("------------ City %d ------------\n", i + 1);
        c[i].read();
    }
    printf("\nCITY-WISE POPULATION AND LITERACY LEVEL\n\n");
    display();
    printf("\nCITY-WISE POPULATION AND LITERACY LEVEL (ALBHABETICALLY SORTED)\n\n");
    sort_city();
    display();
    printf("\nCITY-WISE POPULATION AND LITERACY LEVEL (SORTED BY POPULATION)\n\n");
    sort_population();
    display();
    printf("\nCITY-WISE POPULATION AND LITERACY LEVEL (SORTED BY LITERACY LEVEL)\n\n");
    sort_literacy_level();
    display();
    return 0;
}

void census ::read()
{
    printf("City name: ");
    scanf("%[^\n]", city);
    printf("Population: ");
    scanf("%ld", &population);
    printf("Literacy Level: ");
    scanf("%f%*c", &literacy_level);
}

void sort_city() // Bubble Sort
{
    int i, j;
    struct census t;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5 - 1; j++)
        {
            if (strcmp(c[j].city, c[j + 1].city) > 0)
            {
                t = c[j];
                c[j] = c[j + 1];
                c[j + 1] = t;
            }
        }
    }
}

void sort_literacy_level()
{
    int i, j;
    struct census key;

    for (i = 1; i < 5; i++)
    {
        key = c[i];
        j = i - 1;

        while (j >= 0 && key.literacy_level >= c[j].literacy_level)
        {
            c[j + 1] = c[j];
            j--;
        }
        c[j + 1] = key;
    }
}

void sort_population() // Selection Sort
{
    int i, j;
    struct census t;
    for (i = 0; i < 5 - 1; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (c[i].population < c[j].population)
            {
                t = c[i];
                c[i] = c[j];
                c[j] = t;
            }
        }
    }
}

void display()
{
    int i;
    print_row();
    printf("| %-30s | %-20s | %-20s |\n", "City Name", "Population", "Literacy Level");
    print_row();
    for (i = 0; i < 5; i++)
    {
        printf("| %-30s | %20ld | %20.2f |\n", c[i].city, c[i].population, c[i].literacy_level);
    }
    print_row();
}

void print_dash(int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("-");
    }
}

void print_row()
{
    printf("+");
    print_dash(32);
    printf("+");
    print_dash(22);
    printf("+");
    print_dash(22);
    printf("+\n");
}

/*
Patna
2046652
84.05
Gaya
470839
85.45
Bhagalpur
410210
80.76
Muzaffarpur
404817
74.04
Darbhanga
380125
85.07
*/