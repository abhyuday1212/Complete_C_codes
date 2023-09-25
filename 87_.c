//add two no.

//no argument no return
#include <stdio.h>
void add(void);
int main()
{
    add();
return 0;
}
void add (void)
{
    int a,b,sum;
    printf("\n Enter two Number \n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("\n Additiom = %d",sum);
}
