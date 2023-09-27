// fputs

#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *p;
    p = fopen("fh2.txt", "w");
    fputs("Hellow world in c programming", p);
    fclose(p);
    printf("File Created Successfully");
    return 0;
    getch();
}