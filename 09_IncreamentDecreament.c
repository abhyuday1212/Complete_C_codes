#include<stdio.h>
void main()
{
  int a=5,b=10;
  printf("\n value of a = %d and value of b =%d",a,b);

  printf("\n value of a = %d ",a++); //yha phle a ki value aayegi fr kaam perforn hoga
  //a ki value yha 6 ho gyi


  printf("\n value of a = %d ",++a); //since yha a ki value update hoke 6 ho gyi h so 6+1=7 ho jayegi
//yha a ki value me phle addition ho jayega


 printf("\n value of b = %d ",b++);
 //phlle b ki value print kr dega fr jo operation h wo perform krega
 // above statement k baad b ki value 11 ho gyi

  printf("\n value of b = %d ",--b);
  // hmes updated value lega
  //since b ki value 11 h usme  1 minus krenge to wo print krega
  //yha b ki value 10 ho jayegi
 

  
}
