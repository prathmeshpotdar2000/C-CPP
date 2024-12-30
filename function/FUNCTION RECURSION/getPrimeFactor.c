#include <stdio.h>
int i = 1, count;
int main(int argc, char const *argv[])
{
    int checkPrime(int); // declaration
    int num;
    printf("enter number : ");
    scanf("%d", &num);
    checkPrime(num);
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
            if (n%i==0)
            {
            printf("%d ", i);
            }
            
        }
        i++;
        return checkPrime(n);
    }
    //  printf(" %d",count);
}