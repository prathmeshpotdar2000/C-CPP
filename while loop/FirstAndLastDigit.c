#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int num,f_digit,L_digit,rem;

    printf("enter no: ");
    scanf("%d",&num);

    
   rem=num%10;
   while (num>=10)
   {
    num=num/10;
   }
   printf("first digit is %d",num);
    printf("\nlast digit is %d",rem);
    return 0;
}
