// sum of digits

#include <stdio.h>
void main()
{
    int i, sum;
    printf(" Enter the number: \n");
    scanf("%d", &i);
    sum = 0;      // initiation
    while (i > 0) // condition
    {
        sum = sum + i % 10; // increment    //yha remainder nikl rhe h
        i = i / 10;         // we are setting value of i so that we can check it   //yha divide kr rhe
    }
    printf("\n Sum of digits = %d", sum);
}
