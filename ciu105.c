// call by reference
//wanr

#include <stdio.h>
void change (int *);
int main()
{
int a,*p;
printf("Enter a number : ");
scanf (" %d",&a);
p=&a;
printf("\n Value of a number before function call : %d",a);
change (p);
printf("\n Value of a number after function call : %d",a);
//This is the example of call by reference so that its originbal value is not
// a ki value hi change hi kar diya

    
    return 0;
}
void change (int *p) 
{

    *p=*p+10;
    printf("\n Value of a according to second function %d",*p);
    }