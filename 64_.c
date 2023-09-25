//find the sum of even and prouct of odd in 2d array


#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0,pro=1;
    for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
    printf("\n Enter value of 2d array a[%d][%d] = ",i,j);
    scanf("%d",&a[i][j]);

}
 printf("\n 2D Array Elements are:");
for(i=0;i<3;i++)

{
    printf("\n");
    for(j=0;j<3;j++)
    printf("%d \t",a[i][j]);
}
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
    if (a[i][j]%2==0)
    sum=sum+a[i][j];

    else
    pro=pro*a[i][j];

}
printf("\n Total sum of Even = %d and Total product of Odd=%d",sum,pro);

  return 0;
}

