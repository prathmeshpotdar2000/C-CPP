#include<stdio.h>
int main(int argc, char const *argv[])
{
    int sqare,a,sum=0,rem;
    printf("enter input number");
     scanf("%d",&a);
    sqare=a*a;
    //printf("sqare=%d",sqare);

   rem=sqare%10;//81%10=1
   sum=sum+rem;//0+1=1
   sqare=sqare/10;//81/10=8
    rem=sqare%10;//8%10=8
   sum=sum+rem; //1+8=9

   (sum==a)?printf("\nNeon Number"):printf("\nNot Neon NUmber"); 
   
    

   
}
