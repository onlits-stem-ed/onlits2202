#include <stdio.h>
int main()
{
    char name[30];
    printf("Enter your name: ");
    scanf("%[^\n]", name);
    // gets(name);          //dangerous
    printf("Hello! %s\n", name);
    return 0;
}