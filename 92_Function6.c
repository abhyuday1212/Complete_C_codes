// write a function to check weather a given number is Prime or Not
//  WANR
#include <stdio.h>
void prime(int);
int main()
{
   int u;
   printf("Enter the Number \n");
   scanf("%d", &u);
   prime(u);
   return 0;
}
void prime(int i)
{
   int x, count = 0;
   for (x = 1; x <= i; x++)
   {
      if (i % x == 0)
         count++;
   }
   if (count == 2)
      printf("\n The number is prime");
   else
      printf("\n Not Prime");
}