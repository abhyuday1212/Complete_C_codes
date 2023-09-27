
// start patern 8
#include <stdio.h>
void main()
{
    int i, j, u, b;
    printf("Enter a number of lines you want to print the star pattern \n");
    scanf("%d", &u);
    i = 1;

    while (i <= u)
    {
        printf("\n ");
        b = 1;
        while (b <= 5 - i)
        {
            printf(" ");
            b++;
        }

        j = 1;
        while (j <= i)
        {
            printf("%d", i + j);
            j++;
        }
        i++;
    }
}
