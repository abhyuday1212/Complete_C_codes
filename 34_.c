//start patern 1
#include<stdio.h>
int main()
{

int i,j,u;
printf("Enter a number of lines you want to print the star pattern \n");
scanf("%d",&u);
i=1;

while(i<=u)

{
    printf("\n ");
    j=1;
           while(j<=i)          //star print krane k liye ye line use hota h
              {
                 printf("*");
                  j++;
               }
i++;
}
return 0;
}
