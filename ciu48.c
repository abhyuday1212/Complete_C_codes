#include<stdio.h>
int main()
{
int a[10],u,i=0,sum=0;
for(u=0;u<10;u++)
{
    printf("\n Enter number %d ",i);
    scanf("%d",&a[u]);
    
i++;

}
for(u=0;u<10;u++)
{
    sum=sum+a[u];

}
printf("\n Sum of array numbers = %d",sum);
  return 0;
}
