//start patern 5
#include<stdio.h>
int main()
{
int i,j,u,b,d=i;
printf("Enter a number of lines you want to print the star pattern \n");
scanf("%d",&u);
i=1;


while(i<=u)
{
    printf(" \n "); //ye printf hm i++ k just baaad v lga skte h

    //space printing k liye use hota h

    b=1; //b=blank
    while(b<i)
    {
      printf(" ");
      b++;
    }

    //star printing k liye ye use hoga
    j=1;
    while(j<=u+1-i)
{
    printf("%d",i);
    j++;

}
i++;
//yha b hm printf la skte h next line me print krwane k liye

}
return 0;
}
