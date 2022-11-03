#include <stdio.h>
#define CAP_OFFSET 64
#define SML_OFFSET 96
int main()
{
    // char alphabet[] = " abcdefghijklmnopqrstuvwxyz";
    char letter;
    int pos;
    printf("Enter a letter: ");
    scanf("%c", &letter);
    if (letter >= 65 && letter <= 90)
    {
        pos = letter - CAP_OFFSET;
    }
    else if (letter >= 97 && letter <= 122)
    {
        pos = letter - SML_OFFSET;
    }
    else
    {
        printf("Input is not a letter.\n");
        return 0;
    }
    printf("The letter %c is a position %d in the alphabet.\n", letter, pos);
    return 0;
}

/*
    Time complexity: O(1)
*/