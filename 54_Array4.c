// program to find sum of even numbers and product of odd numbers in array

#include <stdio.h>
int main()
{
  int a[10], u, even = 0, odd = 0, sum1 = 0, pro = 1;
  for (u = 0; u < 10; u++)
  {
    printf("Enter number ");
    scanf("%d", &a[u]);
  }
  for (u = 0; u < 10; u++)
  {
    if (a[u] % 2 == 0)
      sum1 = sum1 + a[u];
    else
      pro = pro * a[u];
  }

  printf("\n sum of even = %d and Product of odd = %d", sum1, pro);

  return 0;
}
