#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int a,sum=0,digit;
    printf("enter a number: ");
    scanf("%d",&a);

    while (a>0)
    {
        digit=a%10;
        sum=sum+digit;
        a=a/10;

    }
    printf("%d ",sum);
    return 0;
}
