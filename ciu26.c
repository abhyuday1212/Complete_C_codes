
//program to find armstrong
#include<stdio.h>
void main()
{
int i,sum=0,o;
    printf("Enter a number \n");
    scanf("%d",&i);
    o=i;

while (i!=0)
{
  sum = sum + (i%10)*(i%10)*(i%10);
  i=i/10;
}
if (sum==o)
    printf("The number is armstrong no.");
else
 printf("The number is not armstrong no.");
}
