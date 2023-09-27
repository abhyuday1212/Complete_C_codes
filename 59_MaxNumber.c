// prgm to find max numbers of array

#include <stdio.h>
int main()
{
    int a[10], u, max;
    //------------------------------------
    for (u = 0; u < 10; u++)
    {
        printf("Enter number ");
        scanf("%d", &a[u]);
    }
    //-------------------------------------
    max = a[0]; // hm log max  me 0 index pe jo v h uski value insert kr rhe h
    //-------------------------------------
    for (u = 1; u < 10; u++) // u=0 pe v pgm run krega
    {
        if (a[u] > max)
            max = a[u];
    }
    // yha curly braces ki jrurat nhi h kyuki hr ek control statemment k sath uski
    // niche wli line count hoti h bina braces k v

    //--------------------------------------

    printf("\n Max Number is %d", max);

    return 0;
}
