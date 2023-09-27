// call by value
// wanr

#include <stdio.h>
void change(int);
int main()
{
    int a;
    printf("Enter a number : ");
    scanf(" %d", &a);
    printf("\n Value of a number before function call : %d", a);
    change(a);
    printf("\n Value of a number after function call : %d", a);
    // This is the example of call by value so that its originbal value is not
    // changed only the copy is transfered

    return 0;
}
void change(int a)
{
    a = a + 10;
    printf("\n Value of a according to second function %d", a);
}