// realloc

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int i;
    ptr = (int *)calloc(5, sizeof(int));
    printf("Enter 5 numvbers :");
    for (i = 0; i < 5; i++)
        scanf("%d", &ptr[i]);

    ptr = realloc(ptr, 8);
    printf("Enter 8 numvbers :");
    for (int i = 0; i < 8; i++)
        scanf("%d", &ptr[i]);

    for (i = 0; i < 8; i++)
        printf("%d \n", ptr[i]);
    return 0;
}