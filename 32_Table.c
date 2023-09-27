
// print table of a given number

#include <stdio.h>
void main()
{
    int u, i, z;
    printf("Enter a number you want to print the table of \n");
    scanf("%d", &u);
    i = 1;
    while (i <= 10)
    {
        z = u * i;
        printf(" %d * %d = %d \n", u, i, z);
        // printf("u*i=z \n",u,i,z);

        i++;
    }
}
