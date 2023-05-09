//pgm to sort any array in ascending or descending order

#include<stdio.h>
int main()
{
int a[10],u,j,d;

for(u=0;u<10;u++)
{
    printf("Enter number ");
    scanf("%d",&a[u]);
}
for(u=0;u<9;u++)
for(j=u+1;j<10;j++)
{
    if(a[u]>a[j])
    {
        d=a[u];   //dummy variable just to store the value of a[u]
        a[u]=a[j];
        a[j]=d;

    }
}
printf("\n Array after sorting in ascending order is:");
for(u=0;u<10;u++)
printf("\n %d",a[u]);



  return 0;
}
