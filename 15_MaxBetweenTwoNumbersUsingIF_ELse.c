#include <stdio.h>
void main()
{
  int a, b;
  printf("Enter two numbers \n");
  scanf("%d%d", &a, &b);
  if (a > b)
    printf(" Max number= %d", a);
  else

    printf(" Max number= %d", b);
}
