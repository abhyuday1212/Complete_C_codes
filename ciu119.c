//fgets

#include<stdio.h>
int main()
{
    FILE *p;
    char text[300];
    p=fopen("fh9.txt","r");
    if(p==NULL)
    {
    printf("File could not be opened");
    return 0;

}
    getchar;
 fgets(text,200,p);
    printf("%s",text);
    fclose(p);
 return 0;
}
