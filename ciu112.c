

//fprintf

#include<stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("fh1.txt","w");
    fprintf(fp,"Hello in the world of file handling");
    printf("File Created Successfully");
    fclose(fp);
return 0;
}