#include <stdio.h>
int main()
{
    FILE *fp;
    char c;
    fp = fopen("first-file.txt", "r");
    if(fp != NULL)
    {
    printf("The file 'first-file.txt' contains the following data:\n");
    while((c = getc(fp)) != EOF)
    {
        putchar(c);
    }
    printf("\nReading complete!\n");
    }
    else
    {
        printf("File not found!\n");
        return 1;
    }
    return 0;
}