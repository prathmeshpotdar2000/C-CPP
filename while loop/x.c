#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num, factor, sum, sum2 = 0; // Initialize sum2 to 0
    printf("Enter the limit (1 to n) of numbers: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        sum = 0;
        for (int j = 1; j <= i; j++)
        {
            factor = i % j;
            if (i % j == 0)
            {
                sum = sum + j;
            }
        }
        if (sum == i)
        {
            sum2 = sum2 + sum;
        }
    }

    printf("Sum of perfect numbers up to %d is: %d", num, sum2);

    return 0;
}
