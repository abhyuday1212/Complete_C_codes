// program to find the factorial f a given number

#include <stdio.h>
void main()
{
    int i, n, f;
    printf("Enter a number: ");
    scanf("%d", &i);
    f = 1;
    n = 1;
    while (n <= i)
    {
        f = n * f;
        n++;
    }
    printf("Factorial of a given number is %d", f);
}
