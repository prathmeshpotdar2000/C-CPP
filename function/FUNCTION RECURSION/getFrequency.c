#include<stdio.h>

int count=0,digit;
int main(int argc, char const *argv[])
{
    int getFrequency(int,int);
    int num,result;
    printf("enter number: ");
    scanf("%d",&num);
    printf("enter the digit to find frequency: ");
    scanf("%d",&digit);
    result=getFrequency(num,digit);
    printf("frequency of that number is: %d",result);

    return 0;
}

int getFrequency(int n,int m)
{
    
    if (n>0)
    {
        int digit1=n%10;
        if (digit1==m)
        {
          count++;
        }
        n=n/10;
        
       getFrequency(n,m);
    }
    else
    return count;

}