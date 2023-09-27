// pgm to check a given numberis odd or even

// yha se copy me note nhi bnaye h

#include <stdio.h>
int main()
{
    int a, *p; // yha pe star ye btaatta h ki p ek pointer h
    // iske baad khi v p use hoga to uska mtlb {value at p se hoga}

    // agar kisi pointer me di hui value store krani h to variable initially agar integer mane the to
    // baad me v integer hi manenge pointer k liye datatype

    printf("\n Enter a no. to check odd or even :  ");
    scanf("%d", &a);
    p = &a; // p is equal to address of a
    // ab jha jha a use krte the wha   a-->*p (value at p) use kriye
    if (*p % 2 == 0)
        printf("Even");
    else
        printf("Odd");
    return 0;
}