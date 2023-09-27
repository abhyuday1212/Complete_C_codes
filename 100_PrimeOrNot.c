// pgm to check weather a given number is prime or not

#include <Stdio.h>
int main()
{
    int a, i, *p, factor;
    printf("Enter a number : ");
    scanf("%d", &a);
    p = &a;
    for (i = 1; i <= *p; i++)
    {
        if (*p % i == 0)
            factor++;
    }
    if (factor == 2)
        printf("The given number is prime number ");
    else
        printf("The given number is not prime number");

    return 0;
}