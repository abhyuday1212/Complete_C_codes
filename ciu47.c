//Program to accept and display an array
#include<stdio.h>
int main()
{
int a[10],u;
for(u=0;u<10;u++)
{
    printf("\n Enter number \n");
    scanf("%d",&a[u]);

}


printf("\n Array Elements are:");
for(u=0;u<10;u++)
{
printf("\n %d",a[u]);
}
  return 0;
}
