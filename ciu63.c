//prgm to print left and right diagonal elements

#include<stdio.h>
int main()
{
int a[3][3],i,j,key;
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
//---------------------------------------------------------
printf("\n The left diagonal Elements are \n");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
    if(i==j)
    printf("%d \t",a[i][j]);

}
printf("\n The Right Digonal Elements are  \n");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
    if(i+j==2)
    printf("%d \t",a[i][j]);

}


  return 0;
}
