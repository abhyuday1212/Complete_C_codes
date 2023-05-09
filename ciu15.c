//this code is bit heavy to process

//Program to print n natural number


#include<stdio.h>
void main()
{
  int n, i=1;
  printf(" Enter a number \n");
  scanf("%d",&n);
  printnum:
printf("\t %d",i);
i++;
if(i<=n)
goto printnum;
}
