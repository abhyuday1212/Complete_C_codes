
//start patern 6
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
    //space management
    b=1;
    while(b<=u-i)
    {
        printf(" ");
        b++;
    }


    j=1;
    //star kaise print hoga ya basically kya priint hoga
           while(j<=i)
              {
                 printf("%d",i);
                  j++;
               }
i++;

}
}
