// WANR

// Write a pgm to find the sum of array elements

// something is wrong

#include <stdio.h>
void arrayadd(int[], int);
int main()
{
    int a[100], size, i;
    printf("\n Enter Size of the Array : ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("\n Enter number a[%d] =  ", i);
        scanf("%d", &a[i]);
    }
    arrayadd(a, size);
    return 0;
}
void arrayadd(int a[], int size)
{
    int sum = 0, i;
    for (i = 0; i <= size; i++)
    {
        sum = sum + a[i];
    }
    printf("\n Sum of array = %d", sum);
}