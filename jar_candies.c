#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int n,num,k,m;
    printf("enter no of candies: ");
    scanf("%d",&num);

    n=10;
    m=n-num;
    m<=n;
    k<=n/2;

    //(num<=0)?printf("invalid input\n""number of candies left:%d\n",n):printf("number of candies sold: %d\n",num,"number of candies available: %d\n",m);


    if (num<=0||num>10)
    {
        printf("invalid input\n");
        printf("number of candies left:%d\n",n);
    }
    else
    {
        printf("number of candies sold: %d\n",num);
        printf("number of candies available: %d\n",m);
    }
    
    return 0;
}
