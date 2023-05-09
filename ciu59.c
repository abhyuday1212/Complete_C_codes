//pgm to count odd and even numbers in a 3*3 matrix

#include<stdio.h>
int main()
{
    int a[3][3],i,j,even,odd;
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
even=0,odd=0;
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
    if (a[i][j]%2==0)
    even++;
    else
    odd++;

}
printf("\n Total Even = %d and Total Odd=%d",even,odd);

  return 0;
}
