#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    int a[5],sum=0,sum1=0;
    printf("enter 5 values: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        if (a[i]%2==0)
        {
           sum=sum+a[i];
        }
        else if (a[i]%2==1)
        {
            sum1=sum1+a[i];
        }
        
    }
    printf("\nsum of even no is = %d",sum);
    printf("\nsum of odd no is = %d",sum1);
    return 0;
}
