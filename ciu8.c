#include<stdio.h>
void main()
{
  int a,b,c,max;
  printf("enter three numbers \n ");
  scanf("%d%d%d",&a,&b,&c);
max = (a>b && a>c)?a:(b>a && b>c)?b:c;

/*
a is greater than b and a is greater than c hai kya ye puch rha compiler?
agr h to a ko transfer kro max me nhi to ye check kro ki B jo h wo A se bda h
and B jo h wo c se bda h agr hai to b ko transfer kro max me 
nii to c to max ho hi jayega

*/

  printf(" Max Number=%d \n",max);


  
}
