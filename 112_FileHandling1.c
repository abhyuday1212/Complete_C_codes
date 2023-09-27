// fputc

#include <stdio.h>
int main()
{
    FILE *p;
    p = fopen("fh3.txt", "w");
    fputc('z', p);
    fclose(p);
    printf("File Created Successfully");
    return 0;
}
