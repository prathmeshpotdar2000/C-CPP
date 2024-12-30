#include <stdio.h>
int i = 0, digit,rem,sum, count = 0;
int main(int argc, char const *argv[])
{
    int getNatural(int); // declaration
    int num, result;
    printf("enter number : ");
    scanf("%d", &num);
    result = getNatural(num);
    printf("the sum of first and last digit is: %d ", result);
    return 0;
}
int getNatural(int n)
{
    count++;
    if (count == 1)
    {
        rem = n % 10;
        // printf(" %d", rem);
    }

    if (n > 10)
    {
        //  printf(" %d",n);
        n = n / 10;
        return getNatural(n);
    }
    else
    {
        sum=rem+n;
        return sum;
    }
}