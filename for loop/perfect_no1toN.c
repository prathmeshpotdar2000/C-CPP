//a perfect number is that number whos sum of factors excluding 
//itself is equal to the original number Ex:6,28
#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int num,sum=0,i,factor;
    printf("enter number limit: ");
    scanf("%d",&num);
   
    for( i = 1; i <= num; i++)
    {
        sum=0;
        for (int j = 1; j < i; j++)
        {
            if(i%j==0)
            { 
             // printf("\nfactor= %d",j); 
              sum=sum+j;
            }   
        }
        if (sum==i)
        {
           printf("\n%d ",i);
        }
    }
   // printf("sum%d",sum);  
    return 0;
}
