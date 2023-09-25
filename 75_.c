//accept a string and print character by character
#include<stdio.h>
int main()
{
    char a[50];
    int i;
    printf("Enter your Name: ");
    gets(a);
    i=0;
    while(a[i]!='\0')
    {
        printf("%c \t",a[i]);
        i++;
    }
    return 0;
}
