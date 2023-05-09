//fscanf
/* basically to read and print all daata */
#include <stdio.h>
int main()
{
    FILE *p;
    char buff[255];
    p=fopen("fh8.txt","r");
   while(fscanf(p,"%s ",buff)!=EOF){
printf("%s ",buff);
   }
    
    fclose(p);


    
    return 0;
}
