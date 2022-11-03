#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int len;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    len = strlen(str);
    printf("The string %s has %d characters.\n", str, len);
    return 0;
}