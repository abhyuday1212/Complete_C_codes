// c program to search a number usin function

#include <stdio.h>
void sort(int[], int, int);
int main()
{
    int a[100], size, i, num;
    printf("\n Enter Size of the Array = ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("\n Enter number a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("\n Enter number to search =  ");
    scanf("%d", &num);
    sort(a, size, num);
    return 0;
}
void sort(int a[], int size, int num)
{
    int i, key = 0, pos;
    for (i = 0; i < size; i++)
    {
        if (a[i] == num)
        {
            key = 1;
            pos = i + 1;
            break;
        }
    }

    if (key == 1)
        printf("Number found at position %d", pos);
    else
        printf("\n Number not found");
}
