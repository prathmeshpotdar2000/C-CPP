#include<stdio.h>

int num1=0;
int main(int argc, char const *argv[])
{
    int getReverse(int);
    int num,result;
    printf("enter number: ");
    scanf("%d",&num);
    result=getReverse(num);
    printf("after reverse %d",result);

    return 0;
}

int getReverse(int n)
{
    
    if (n>0)
    {
        int digit=n%10;
         num1=num1*10+digit;
        n=n/10;
       getReverse(n);
    }
    else
    return num1;

}