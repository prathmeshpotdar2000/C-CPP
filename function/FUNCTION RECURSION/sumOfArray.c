#include <stdio.h>
int i = 0;
int sum = 0;
int main(int argc, char const *argv[])
{
    int getsum(int[], int);
    int a[5], len, result;
    len = sizeof(a) / sizeof(a[0]);

    printf("enter 5 values: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    result = getsum(a, len);
    printf("sum of array is:%d ", result);
    return 0;
}
int getsum(int a[], int len)
{
    if (i < len)
    {
        sum = sum + a[i];
        i++;
        return getsum(a, len);
    }
    else
    {
        return sum;
    }
}