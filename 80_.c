//concatenate two strig into one
#include<stdio.h>
int main()
{
char a[50],b[50],c[100];
int i,j;
printf("\n Enter First String \n");
gets(a);
printf("\n Enter Second String \n");
gets(b) ;
i=j=0;
while(a[i]!='\0')
{
    c[i]=a[i];
    i++;
}
while(b[j]!='\0')
{
    c[i]=b[j];
    i++;
    j++;
}
c[i]='\0';
printf("\n Concated String = %s ",c);



  return 0;
}
