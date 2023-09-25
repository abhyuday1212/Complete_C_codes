#include<stdio.h>
void main()
{
    int a,b,c;

  printf("Enter three numbers:");
  scanf("%d%d%d",&a,&b,&c);
if (a>b && a>c)
printf("\n Max number is = %d",a);

else if(b>a && b>c)
printf("\n Max number is = %d",b);

else 
printf("\n Max number is = %d",c);

}
