// sum of n natural no.

#include <stdio.h>
void main()
{
  int n, s, i;
  printf("Enter the value of n \n");
  scanf("%d", &n);
  i = 1; // initialization
  s = 0;
  while (i <= n) // condition
  {
    s = s + i;
    i = i + 1;
  }
  printf("\n The sum of n ntural number is = %d ", s);
}