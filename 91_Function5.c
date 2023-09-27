// with argument no return

// wap a function to find reverse of a given number

#include <stdio.h>
void reverse(int);
int main()
{
    int a;
    printf("Enter a number \n");
    scanf("%d", &a);
    reverse(a);
    return 0;
}

// hm koi integer le wo value scanf wli function ko call krne pe transfer kr dega x wle me

void reverse(int x)

// int ke sath wla variable r usk upr jo main wla variable alg h
//  dono variable same v ho skta h  (x=a ye ho skta h)

{

    int rev = 0;
    while (x > 0)
    {
        rev = rev * 10 + x % 10;
        x = x / 10;
    }
    printf("Reverse of the Number = %d", rev);
}