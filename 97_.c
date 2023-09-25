#include<stdio.h>
int main ()
{
    int a,b,c,*p,*q;
    printf("\n Enter two no.");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    c=*p + *q;
    printf("\n Addition = %d ",c);
    return 0;
}