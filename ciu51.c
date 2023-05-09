//prgm to print alternate elements of the array
#include<stdio.h>
int main()
{
int a[10],u;
for(u=0;u<10;u++)
{
    printf("Enter number ");
    scanf("%d",&a[u]);

}
for(u=0;u<10;u=u+2)
{
    printf("\n %d",a[u]);

}
  return 0;
}