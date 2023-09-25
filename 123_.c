//calloc

#include<stdio.h>
#include<stdlib.h>
int main (){
    int *p;
    p= (int*) calloc (5,sizeof(int));
    p[0]=1;
    p[1]=2;
    p[2]=13;
    p[3]=14;
    p[4]=15;
    for (int i=0;i<5;i++)
    printf("%d \n",p[i]);
    return 0;
}