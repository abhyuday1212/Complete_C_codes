
// start patern 10
#include <stdio.h>
void main()
{
   int i, j, u, b;
   printf("Enter a number of lines you want to print the star pattern \n");
   scanf("%d", &u);
   i = 1;
   while (i <= u)
   {
      printf("\n ");
      j = u;
      while (j >= i)
      {
         printf("%d", i);
         j--;
      }
      i++;
   }
}
