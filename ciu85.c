//add two no.

//no argument with return
#include <stdio.h>
int add (void);
int main()
{
        int sum;
        sum = add();
         printf("\n Additiom = %d",sum);
return 0;
}
int add (void)
{
    int a,b,c;
    printf("\n Enter two Number \n");
    scanf("%d%d",&a,&b);
    c=a+b;
    return(c);
}

