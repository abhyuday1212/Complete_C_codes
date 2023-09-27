// prgm to accept and display 3*3 matrix

#include <stdio.h>
int main()
{
  int a[3][3], i, j;
  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
    {
      printf("\n Enter value of 2d array a[%d][%d] = ", i, j);
      scanf("%d", &a[i][j]);
    }
  printf("\n 2D Array Elements are:");
  for (i = 0; i < 3; i++)
  {
    printf("\n");
    for (j = 0; j < 3; j++)
      printf("%d \t", a[i][j]);
  }

  return 0;
}
