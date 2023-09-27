#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);

    printf("\n a>b is = %d", a > b);
    printf("\n a<b is = %d", a < b);
    printf("\n a>=b is = %d", a >= b);
    printf("\n a!=b is = %d", a != b);

    return 0;
}
