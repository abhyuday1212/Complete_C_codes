// count even or odd

#include <stdio.h>
int main()
{
    int a[10], i, u, *p, even = 0, odd = 0;
    printf("Enter the size of array : ");
    scanf("%d", &u);
    //------------------------
    for (i = 0; i < u; i++)
    {
        printf("Enter the number [%d] : \n", i);
        scanf("%d", &a[i]);
    }
    p = a; // in case of arrays
           // or *p=a[0]  //normally integer ki value pointer me paas
    // k liye    p=&a

    printf("\n Values of the array are \n");
    for (i = 0; i < u; i++)
    {
        printf(" %d \t", *(p + i));
    }
    //------------------------------------
    for (i = 0; i < u; i++)
        if (*(p + i) % 2 == 0)
            even++;
        else
            odd++;
    printf("\n Total numbere of even = %d", even);
    printf("\n Total numbere of odd = %d", odd);

    //------------------------------------
    return 0;
}