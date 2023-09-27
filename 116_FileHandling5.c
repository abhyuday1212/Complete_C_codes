

// fgetc

#include <stdio.h>
int main()

{
    FILE *p;
    char c;

    p = fopen("fh5.txt", "r");
    if (p == NULL)
    {
        printf("File do not exist \n");
        return 0;
    }
    while ((c = fgetc(p)) != EOF)
    {
        printf("%c", c);
    }
    fclose(p);
    return 0;
}