#include <stdio.h>
int i = 0,digit,count,product=1;
int main(int argc, char const *argv[])
{
    int getProductOfDigit(int); // declaration
    int num,result;
    printf("enter number : ");
      scanf("%d", &num);
    result= getProductOfDigit(num);
    printf("product of the digits is : %d",result);
    return 0;
}
int getProductOfDigit(int n)
{

    if (n > 0)
    { 
        digit=n%10;
        product=product*digit;
        n=n/10;
        return getProductOfDigit(n);
    }
        // printf(" % d",count);
        else
        return product;
    
}