//print first odd numbers
#include<stdio.h>
void main()
{
  int n,i;
  printf("Enter the value of n till you want to print odd numbers \n");
scanf("%d",&n);
i=1;     //initialization
while (i<=n)     //conditon
{
    if (i%2!=0)  
    printf("\n %d",i);
    i=i+2;            //increament decrement
}
}             
