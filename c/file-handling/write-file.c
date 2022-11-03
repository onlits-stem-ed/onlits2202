#include <stdio.h>
int main()
{
    char c;
    FILE *fp;
    fp = fopen("first-file.txt", "w");
    printf("Enter a sentence: ");
    while((c=getchar()) != EOF)
    {
        putc(c, fp);
    }
    fclose(fp);
    printf("Information saved...\n");
    return 0;
}