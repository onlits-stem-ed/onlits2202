#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[50];
    int i=0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    printf("%s in uppercase is: ", str);
    while(str[i] != '\0')
    {
        printf("%c", toupper(str[i]));
        i++;
    }
    printf("\n");
    return 0;
}