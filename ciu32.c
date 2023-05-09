//start patern 3
#include<stdio.h>
void main()
{
int i,j,u;
printf("Enter a number of lines you want to print the star pattern \n");
scanf("%d",&u);
i=1;
while(i<=u)
{
    printf("\n ");
    j=1;
           while(j<=i)
              {
                 printf("%d",j);
                  j++;
               }
i++;
}
}
