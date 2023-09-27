// print row wise sum of a 2d array

#include <stdio.h>
int main()
{
    int a[3][3], i, j, sum;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            printf("\n Enter value of 2d array a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    printf("\n 2D Array Elements are:");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
            printf("%d \t", a[i][j]);
    }
    //---------------------------------------------------------
    for (i = 0; i < 3; i++)
    {
        sum = 0;
        for (j = 0; j < 3; j++)
            sum = sum + a[i][j];
        printf("\n Sum of row %d is %d ", i + 1, sum);
    }

    for (i = 0; i < 3; i++)
    {
        sum = 0;
        for (j = 0; j < 3; j++)
            sum = sum + a[j][i];
        printf("\n Sum of Column %d is %d ", i + 1, sum);
    }

    return 0;
}
