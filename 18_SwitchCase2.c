#include <stdio.h>
void main()
{
  int ch;
  printf("Enter any numbeer between 1-7 \n");
  scanf("%d", &ch);
  switch (ch)
  {
  case 1:
    printf("\n Monday");

  case 2:
    printf("\n Tuesday");

  case 3:
    printf("\n wednesday");

  case 4:
    printf("\n Thursday");

  case 5:
    printf("\n Friday");

  case 6:
    printf("\n Saturday");

  case 7:
    printf("\n Sunday");

    break;

  default:
    printf("\n Wrong Number");
  }
}
