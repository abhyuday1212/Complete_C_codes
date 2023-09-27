// total number of chracter

#include <stdio.h>
int main()
{
  char a[50];
  int i, j;
  printf("Enter your Name: ");
  gets(a);
  i = 0;
  while (a[i] != '\0')
  {
    i++;
  }
  printf("\n Total Numbers of character = %d", i);

  return 0;
}
