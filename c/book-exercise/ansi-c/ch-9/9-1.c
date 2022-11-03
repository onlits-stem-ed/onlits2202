#include <stdio.h>
int main()
{
    char name[30];
    int i=0;
    printf("Enter your name: ");
    scanf("%[^\n]", name);
    printf("-----------------------------\n");
    printf("%-15s%s\n","Characters","ASCII Values");
    printf("-----------------------------\n");
    while(name[i] != '\0')
    {
        printf("%-15c%d\n", name[i], name[i]);
        // putchar(name[i]);
        i++;
    }
    printf("-----------------------------\n");
    return 0;
}