//prgm to search element in 2d array

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
//------------------------------------
printf("\n Enter the number you want to search ");
scanf("\n %d",&key);

for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
if(a[i][j]==key)
{
printf("\n Element found at a[%d][%d] pos",i,j);
return 0;
}
}

printf("\n Element not found");
  return 0;
}

