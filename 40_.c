
//start patern 7
#include<stdio.h>
void main()
{
int i,j,u,b;
printf("Enter a number of lines you want to print the star pattern \n");
scanf("%d",&u);
i=1;
while(i<=u)
{
    b=1;
    while(b<=u-i)
    {
        printf(" ");
        b++;
    }


    j=1;
           while(j<=i)
              {
                 printf("%d",j);
                  j++;
               }
i++;
    printf("\n ");
}
}
