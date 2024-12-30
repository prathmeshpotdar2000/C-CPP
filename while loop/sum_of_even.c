#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int n,i=2,sum;
    printf("enter no:");
    scanf("%d",&n);

    while (i<=n)
    {
        if (i%2==0)
        {
           sum=sum+i;
          
        }
         i++;

    }
    printf("%d",sum);

    return 0;
}
