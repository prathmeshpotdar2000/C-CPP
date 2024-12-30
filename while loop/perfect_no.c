//a perfect number is that number whose sum of its proper devisors excluding 
//itself is equal to the original number Ex:6,28
//Check Number Is Perfect Number or Not.

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,sum=0,i=1,factor;
    printf("enter a no: ");
    scanf("%d",&num);

    while (i<num)
    {
        factor=num/i;   
        if (num%i==0)
        {
            printf("factors are:%d ",i);
            sum=sum+i;
        }
         i++;
    }
    
    printf("num=%d",num);
        printf("sum=%d",sum);

    if (sum==num)
    {
       printf("\n%d is perfect no",num);
    }
    else{
        printf("\n%d is not perfect no",num);
    }
    return 0;
}
