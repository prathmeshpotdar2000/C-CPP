//palindrome no is that number who is exactally same after reverse the digits Ex:121=121,34543=34543
#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int num,digit,num1=0;

    printf("enter no: ");
    scanf("%d",&num);
    int num2=num;
    while (num!=0)
    {
        digit=num%10;
        num1=num1*10+digit;
        num=num/10;
    }
    printf("%d",num1);
    if (num1==num2)
    {
        printf(" is palindrome number ");
    }
    else
    {
        printf(" is not palindrome number");
    }    
    
    return 0;
}
