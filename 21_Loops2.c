// print first even numbers

// nummber till you want to print the even number

#include <stdio.h>
void main()
{
  int n, i;
  printf("Enter the value of n \n");
  scanf("%d", &n);
  i = 2;         // initialization
  while (i <= n) // conditon
  {
    if (i % 2 == 0)
      printf("\n %d", i);
    i = i + 2; // increament decrement
  }
}
