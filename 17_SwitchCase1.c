#include <stdio.h>
void main()
{
  int ch;
  printf("Enter any number between 1-7 \n");
  scanf("%d", &ch);
  switch (ch)
  {
  case 1:
    printf("\n Monday");
    break;

  case 2:
    printf("\n Tuesday");
    break;

  case 3:
    printf("\n wednesday");
    break;

  case 4:
    printf("\n Thursday");
    break;

  case 5:
    printf("\n Friday");
    break;

  case 6:
    printf("\n Saturday");
    break;

  case 7:
    printf("\n Sunday");
    break;

  default:
    printf("Wrong Number");
  }
}
