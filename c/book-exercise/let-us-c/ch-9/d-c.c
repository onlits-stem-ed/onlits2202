#include <stdio.h>
int main()
{
    char str[50];
    int i = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    printf("%s in uppercase is: ", str);
    while (str[i] != '\0')
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            printf("%c", str[i] - 32);
        }
        else
        {
            printf("%c", str[i]);
        }
        i++;
    }
    printf("\n");
    return 0;
}