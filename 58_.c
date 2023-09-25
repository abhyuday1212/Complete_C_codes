//count frequency of a given number in a array

#include<stdio.h>
int main()
{
int a[10],u,freq,key;
for(u=0;u<10;u++)
{
    printf("Enter number ");
    scanf("%d",&a[u]);
}
printf("\n Enter a number to find frequency ");
scanf("%d",&key);
for(u=0;u<10;u++)
    if ( a[u]==key)
    freq++;
printf("\n Frequency of %d is %d.",key,freq);

  return 0;
}
