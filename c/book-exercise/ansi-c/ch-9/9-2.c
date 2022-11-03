#include <stdio.h>
#include <string.h>
int main()
{
    char ans[30];
    int i;
    for (i = 1; i <= 3; i++)
    {
        printf("Q. Who is the inventor of C?\n");
        printf("A. ");
        scanf("%[^\n]%*c", ans);

        if (strcmp(ans, "Dennis Ritche") == 0)
        {
            printf("Good!\n");
            break;
        }
        else
        {
            if(i==3)
            {
                printf("You have exhausted all your attempts. The correct answer is Dennis Ritche\n");
            }
            else
            {
                printf("Try Again!\n");
            }
        }
    }
    return 0;
}