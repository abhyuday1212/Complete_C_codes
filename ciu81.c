//recursions 113/115
#include<stdio.h>
#include<conio.h>
int factorial(int);
int main()
{
int n,ans;
printf("\n Enter Number to find factorial ");
scanf("\n%d",&n);
ans=factorial(n);
printf("\n Factorial %d",ans);
return 0;
}
int factorial(int n)

{
    int f;
    if (n==0)
    return 1;
    else
     f= n*factorial(n-1);
return f;

}