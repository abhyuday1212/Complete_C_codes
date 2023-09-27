
// fscanf

#include <stdio.h>
int main()
{
    FILE *p;
    char buff[255];

    p = fopen("fh7.txt", "r");
    fscanf(p, "%s", buff);
    printf("%s", buff);
    fclose(p);
    return 0;
}
