#include <stdio.h>
int main()
{
    char alphabet[] = " abcdefghijklmnopqrstuvwxyz";
    int num;
    printf("Enter a number (1-26): ");
    scanf("%d", &num);
    if (num >= 1 && num <= 26)
        printf("The letter at position %d is %c.\n", num, alphabet[num]);
    else
        printf("Invalid Input\n");
    return 0;
}

//Time complexity: O(1)