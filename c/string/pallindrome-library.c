#include <stdio.h>
#include <string.h>
void strrev(char *str);
int main()
{
    char word[30], copy[30];
    printf("Enter a word: ");
    scanf("%s", word);
    strcpy(copy, word);
    strrev(copy);
    printf("%s\n", copy);
    if(strcmp(word, copy) == 0)
    {
        printf("%s is a pallindrome.\n", word);
    }
    else
    {
        printf("%s is not a pallindrome.\n", word);
    }
    return 0;
}

void strrev(char *str)
{
    int len = strlen(str);
    int i;
    char t;
    for (i = 0; i < len/2; i++)
    {
        t = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = t;
    }
}