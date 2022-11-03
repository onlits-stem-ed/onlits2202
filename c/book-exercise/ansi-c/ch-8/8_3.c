#include <stdio.h>
int main()
{
    int votes[6] = {0,0,0,0,0,0}, n, i;
    while(1)        //creating infite loop
    {
        printf("Enter candidate numbe [6 for exit][0 for spoilt]: ");
        scanf("%d", &n);
        if(n==6)
            break;
        votes[n]++;
    }
    
    for(i=0; i<6; i++)
    {
        printf("%d. %d\n", i, votes[i]);
    }
    return 0;
}