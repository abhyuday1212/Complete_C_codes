#include <stdio.h>
int main()
{
    int n;
    printf("Enter THE number of elements in a array ");
    scanf("%d", &n);
    int array[n], i, a;
    for (i = 0; i < n; i++)
    {
        printf("Enter the element of array [%d]", i);
        scanf("%d", &array[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &a);
    for (i = 0; i < n; i++)
    {
        if (array[i] == a)
        {
            printf("Element is at index: %d and its address is = %d", i, &array[i]);
        }
    }
}