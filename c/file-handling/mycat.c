#include <stdio.h>
int main(int argc, char *argv[])
{
    FILE *fp;
    char c;
    fp = fopen(argv[1], "r");
    if (fp != NULL)
    {
        while ((c = getc(fp)) != EOF)
        {
            putchar(c);
        }
    }
    else
    {
        printf("File not found!\n");
        return 1;
    }
    return 0;
}