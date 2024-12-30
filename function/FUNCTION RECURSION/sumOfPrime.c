#include <stdio.h>
int i = 1, count,sum=0;
int main(int argc, char const *argv[])
{
    int checkPrime(int); // declaration
    int num,result;
    printf("enter number : ");
    scanf("%d", &num);
    result=checkPrime(num);
    printf("sum of prime numbers is %d",result);
    return 0;
}
int checkPrime(int n)
{
    if (i <= n)
    {
        count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            // printf("%d ", i);
            sum=sum+i;
        }
        i++;
        return checkPrime(n);
    }
     return sum;
}