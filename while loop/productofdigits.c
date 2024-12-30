#include<stdio.h>

int main(int argc, char const *argv[])
{
  
    int num,product=1,digit;
    printf("enter no: ");
    scanf("%d",&num);

    while (num>0)
    {
        digit=num%10;
        product=product*digit;
        num=num/10;

        
    }
    printf("%d",product);
    return 0;
}
