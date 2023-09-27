#include <stdio.h>
int main()
{
  char a[50], b[50];

  int i;
  i = 0;
  printf("\n Enter First String : ");
  gets(a);
  while (a[i] != '\0')
  {
    b[i] = a[i];
    i++;
  }
  b[i] = '\0';
  printf("\n Copied String = %s", b);
  return 0;
}