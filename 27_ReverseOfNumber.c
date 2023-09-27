// program to find reverse of a number

#include <stdio.h>
void main()
{
    int i, rev;
    printf("Enter a number \n");
    scanf("%d", &i);
    rev = 0;
    while (i > 0)
    {
        rev = rev * 10 + i % 10;
        i = i / 10;
    }
    printf("\n rev = %d", rev);
}
