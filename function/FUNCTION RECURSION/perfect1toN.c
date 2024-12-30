#include <stdio.h>
int i = 1, sum;
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
    if (i <= n)
    {
        sum = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                //  printf(" %d",j);
                sum = sum + j;
            }       
        }
        if (sum == i)
        {
            printf("the perfect numbers are  %d", i);
        }
         i++;
        return getFactors(n);
    }
}