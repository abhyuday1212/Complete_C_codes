
// addn of two matrix

#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3], i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            printf("\n Enter the values of matrix 1 a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            printf("\n Enter the values of matrix 2 a[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    printf("\n 2D Array Elements of 1st matrix is:");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
            printf("%d \t", a[i][j]);
    }
    printf("\n 2D Array Elements of 2nd matrix is:");
    for (i = 0; i < 3; i++)

    {
        printf("\n");
        for (j = 0; j < 3; j++)
            printf("%d \t", b[i][j]);
    }
    //---------------------------------------------------------
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            c[i][j] = a[i][j] + b[i][j];
    printf("\n Addition of a matrix is");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
            printf("%d \t", c[i][j]);
    }
    return 0;
}
