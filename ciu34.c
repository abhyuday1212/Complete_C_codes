//start patern 5
#include<stdio.h>
void main()
{
int i,j,u,b;
printf("Enter a number of lines you want to print the star pattern \n");
scanf("%d",&u);
i=1;
while(i<=u)
{
        printf("\n ");
    b=1;
    while(b<=u-i)
    {
        printf(" ");
        b++;
    }


    j=1;
           while(j<=i)      //star print krne k liye hota
              {
                 printf("*");
                  j++;
               }
i++;
}
}
