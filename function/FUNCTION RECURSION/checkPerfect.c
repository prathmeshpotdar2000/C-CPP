#include <stdio.h>
int i = 1,sum=0;
int main(int argc, char const *argv[])
{
    int getFactors(int); // declaration
    int num;
    printf("enter number : ");
      scanf("%d", &num);
     getFactors(num);
    return 0;
}
int getFactors(int n)
{
    if (i < n)
    { 
       if(n%i==0)
       {
        // printf(" %d",i);
        sum=sum+i;    
       }
        i++;
        return getFactors(n);
    }
    if (sum==n)
    {
        printf("number is perfect");
    }
    else
            printf("number is not perfect");

    
}