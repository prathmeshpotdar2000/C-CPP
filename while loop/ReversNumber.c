#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int num,digit,num1=0;
    printf("Enter no: ");
    scanf("%d",&num);

    while (num>0)
    {
        digit=num%10;
        num1=num1*10+digit;
        num=num/10;

    }
    printf("%d",num1);
    return 0;
}
