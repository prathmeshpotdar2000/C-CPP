#include <stdio.h>
int i = 0,digit,count;
int main(int argc, char const *argv[])
{
    int getDigit(int); // declaration
    int num,result;
    printf("enter number : ");
      scanf("%d", &num);
    result= getDigit(num);
    printf("digits in a number are : %d",result);
    return 0;
}
int getDigit(int n)
{
    if (n > 0)
    { 
        count++;
        n=n/10;
        return getDigit(n);
    }
        // printf(" % d",count);
        else
        return count;
    
}