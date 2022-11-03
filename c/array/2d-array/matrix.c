#include <stdio.h>
int main()
{
    int matrix[10][10];
    int n, m, i, j;
    printf("Enter number of rows and column (mxn): ");
    scanf("%dx%d", &n, &m);
    printf("Enter the elements of %d x %d matrix:\n", n, m);
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The required matrix is:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}