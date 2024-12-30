#include<stdio.h>

int num1=0,num2;
int main(int argc, char const *argv[])
{
    int checkPalindrome(int);
    int num,result;
    printf("enter number: ");
    scanf("%d",&num);
    num2=num;
    checkPalindrome(num);
    return 0;
}

int checkPalindrome(int n)
{
        if (n>0)
    {
        int digit=n%10;
         num1=num1*10+digit;
        n=n/10;
       checkPalindrome(n);
    }
    else if (num1==num2)
    {
      printf("number is palindrome");
    }
    else
    {
        printf("number is not palindrome");
    }
    
    

}