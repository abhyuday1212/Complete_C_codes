//add two no.

//with argument with return
#include <stdio.h>
int add (int,int);
int main()
{
        int a,b,sum;
            printf("\n Enter two Number \n");
    scanf("%d%d",&a,&b);                                             
        sum = add(a,b);
         printf("\n Additiom = %d",sum);
return 0;
}
int add (int a,int b )
{
    
    int c;
    c=a+b;
    return(c);
}
