#include <stdio.h>
#include <ctype.h>
int main()
{
    char alphabet[] = " abcdefghijklmnopqrstuvwxyz"; //O(1)
    char letter;
    int stat = 0;
    int i;
    printf("Enter a letter: ");
    scanf("%c", &letter);
    while(alphabet[i] != '\0')  //O(n)
    {
        if(alphabet[i] == letter || toupper(alphabet[i]) == letter)
        {
            printf("The letter %c is at position %d in the alphabet.\n", letter, i);
            stat = 1;
            break;
        }
        i++;
    }
    if(stat == 0)
    {
        printf("Input is not a letter.\n");
    }

    return 0;
}

/*
    Time Complexity: O(n)
*/


/*
    The technique used here is called linear search
*/