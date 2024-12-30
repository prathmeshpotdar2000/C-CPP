#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int n,i=1,sum=0;
    printf("enter no:");
    scanf("%d",&n);

    while (i<=n)
    {
        if (i%2==1)
        {
           sum=sum+i;
          
        }
         i++;

    }
    printf("%d",sum);

    return 0;
}
