//program to print an array in reverse order

#include<stdio.h>
int main()
{
int a[10],u;
for(u=0;u<10;u++)
{
    printf("Enter number ");
    scanf("%d",&a[u]);

}
for(u=9;u>=0;u--)
{
    printf("\n %d",a[u]);
}
  return 0;
}