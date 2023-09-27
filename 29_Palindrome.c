// program to find palindrome

#include <stdio.h>
void main()
{
    int i, rev, c;
    printf("Enter a number \n");
    scanf("%d", &i);
    rev = 0;
    c = i;
    while (i > 0)
    {
        rev = rev * 10 + i % 10;
        i = i / 10;
    }
    if (c == rev)
        printf("The number is palindrome");
    else
        printf("The number is not palindrome");
}