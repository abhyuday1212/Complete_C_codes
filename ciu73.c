//accept a string and count total number of WORDS

#include<stdio.h>
int main()
{
    char a[100];
    int i,word=1;
    printf("Enter your Name: ");
    gets(a);
      i=0;
    while(a[i]!='\0')
    {
        if(a[i]==' ')
        word++;
        i++;
    }
printf("\n Total Numbers of words = %d",word);
  return 0;
}
