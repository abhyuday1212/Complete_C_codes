//to find length of the string without including end character

#include<stdio.h>
#include<string.h>
int main()
{
char a[50];

printf("\n Enter string ");
gets(a);
printf("\n Length of string is: %d",strlen(a));
    return 0;

}