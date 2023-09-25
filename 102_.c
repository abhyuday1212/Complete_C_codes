// sum of array elements 

#include<stdio.h>
int main ()
{
int a[10],i,u,*p,sum;
printf("Enter the size of array : ");
scanf("%d",&u);
//------------------------
for(i=0;i<u;i++)
{
printf("Enter the number [%d] : \n",i);
scanf("%d",&a[i]);
}
p=a;   //or *p=a[0]


printf("\n Values of the array are \n");
for(i=0;i<u;i++)
{
    printf(" %d \t",*(p+i));
}
//------------------------------------
sum=0;
for(i=0;i<u;i++)
{
    sum=sum+*(p+i);
}
printf("\n Sum of elements is : %d",sum);
return 0;
}