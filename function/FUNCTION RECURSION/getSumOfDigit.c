#include <stdio.h>
int i = 0,digit,count,sum=0;
int main(int argc, char const *argv[])
{
    int getSumOfDigit(int); // declaration
    int num,result;
    printf("enter number : ");
      scanf("%d", &num);
    result= getSumOfDigit(num);
    printf("sum of the digits is : %d",result);
    return 0;
}
int getSumOfDigit(int n)
{

    if (n > 0)
    { 
        digit=n%10;
        sum=sum+digit;
        n=n/10;
        return getSumOfDigit(n);
    }
        // printf(" % d",count);
        else
        return sum;
    
}