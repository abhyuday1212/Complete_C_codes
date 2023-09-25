//addition of two matrix using a function
// wanr
#include<stdio.h>
void addmat (int[][10],int[][10],int,int);
int main ()
{
    int a[10][10],b[10][10],row,col,i,j;
    printf("Enter Number of rows and columns : ");
    scanf("%d%d",&row,&col);
    printf("\n Enter Matrix 1 \n");
    for(i=0;i<row;i++)
    for(j=0;j<col;j++)
    {
        printf("\n Enter Number a[%d][%d] =  ",i,j);
        scanf("%d",&a[i][j]);


    }
        printf("\n Enter Matrix 2 \n");
    for(i=0;i<row;i++)
    for(j=0;j<col;j++)
    {
        printf("\n Enter Number a[%d][%d] =  ",i,j);
        scanf("%d",&b[i][j]);
    }

addmat(a,b,row,col);
return 0;

}
void addmat (int a[][10],int b[][10],int row,int col)
{
    int c[10][10],i,j;
    for(i=0;i<row;i++)
    for(j=0;j<col;j++)
    c[i][j] = a[i][j] + b[i][j];
    for(i=0;i<row;i++)
{
    printf("\n");
for(j=0;j<col;j++)
printf("%d \t",c[i][j]);
}

}