#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int num,factor,sum,sum2=0;
    printf("enter 1 to n limit of number: ");
    scanf("%d",&num);
    int temp=num;
    for (int i = 1; i < num; i++)
    {   sum=0;
        for (int j = 1; j < i; j++)
        {   
            factor=i%j;
            if (i%j==0)
            {
               // printf("factor=%d",j);
                sum=sum+j;
            }
            
        }
        if (sum==i)
        {
           sum2=sum2+sum;
        }
       
    }
     printf("sum of perfect no is:%d",sum2);
    return 0;
}
