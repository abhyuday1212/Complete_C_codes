//program to find the factorial f a given number

//2nd method


#include<stdio.h>
void main()
{
int i,f;
printf("Enter a number: ");
scanf("%d",&i);
f=1;
while(i>=1)
{
f=i*f;
i--;
}
printf("Factorial of a given number is %d",f);  
}
