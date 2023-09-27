// code me kuch gadbadia h dekh lena
// start patern 11
#include <stdio.h>
int main()
{
   int i, j, u, d;
   printf("Enter a number of lines you want to print the star pattern \n");
   scanf("%d", &u);
   i = 1;
   j = d;
   while (i <= u)
   {
      printf("\n ");

      while (j >= i)
      {
         printf("%d", d);
         j--;
      }
      i++;
   }
   return 0;
}
