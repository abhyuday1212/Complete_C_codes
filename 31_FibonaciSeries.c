
// fibonaci series

#include <stdio.h>
void main()
{
    int n, x = 0, y = 1, z = 0;
    printf("Max limit \n");
    scanf("%d", &n);

    while (z <= n)

    {
        printf("\t %d", z);
        x = y;
        y = z;
        z = x + y;
    }
}
