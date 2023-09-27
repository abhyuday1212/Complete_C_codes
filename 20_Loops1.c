#include <stdio.h>
int main()
{
  int a, i;
  printf("Enter the value till which you want to print \n");
  scanf("%d", &a);
  i = 1;         // initialization
  while (i <= a) // condition
  {
    printf("\n %d", i);
    i = i + 1; // increament,decrement
  }
  return 0;
}
