//pointer with function
 // {99/115}
//wanr

 #include <stdio.h>
void add (int *,int *);
int main ()
{
    int a,b,*p,*q;
    printf("Enter two numbers \n");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;

    add (p,q);
    return 0;

}
void add (int *p,int *q)
{
    int sum;
sum= *p + *q;
printf("Sum of two numbers %d",sum);
}