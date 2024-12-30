//sum of first and last digit of the given number 
#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int num,rem,sum=0;

    printf("enter no: ");
    scanf("%d",&num);

    
   rem=num%10;
   while (num>=10)
   {
    num=num/10;
   }
   sum=num+rem;
   printf("sum of first and last digit is %d",sum);
   
    return 0;
}
