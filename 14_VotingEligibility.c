#include <stdio.h>
void main()
{
  int a;
  printf("Enter your age: \n");
  scanf("%d", &a);
  if (a < 18)
    printf("Person is not eligible to vote");
  else
    printf("Person is eligible to vote");
}
