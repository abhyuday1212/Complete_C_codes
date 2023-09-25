//prgm to count total numbers of odd and even numbers in the array

#include<stdio.h>
int main()
{
int a[10],u,even=0,odd=0;
for(u=0;u<10;u++)
{
    printf("Enter number ");
    scanf("%d",&a[u]);
}
for(u=0;u<10;u++)
{
    if(a[u]%2==0)
    even++;
    else
    odd++;

}
printf("\n Total Even =%d and total odd = %d",even,odd);



  return 0;
}
