// search a number in array

#include<stdio.h>
int main()
{
int a[10],u,flag=0,key,pos;
for(u=0;u<10;u++)
{
    printf("Enter number ");
    scanf("%d",&a[u]);
}
printf("\n Enter a number to search ");
scanf("%d",&key);
for(u=0;u<10;u++)
{
    if ( a[u]==key)
    {
     pos=u+1;
     flag=1;
     break;

    }
}
if(flag==1)
printf("\n Number found at %d position",pos);
else
printf("\n Number not found");
  return 0;
}