//to concatenates two string and return the concenated string.

#include<stdio.h>
#include<string.h>
int main()
{
char s1[100],s2[50];

printf("\n Enter 1st string ");
gets(s1);
printf("\n Enter 2nd string ");
gets(s2);



printf("\nOutput string after concatenation is %s ",strcat(s1,s2));
    return 0;

}