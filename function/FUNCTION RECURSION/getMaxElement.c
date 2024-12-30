#include <stdio.h>
int i = 0, max;
int main(int argc, char const *argv[])
{
    int getmax(int[], int);
    int a[5], len, result, max = a[0];
    len = sizeof(a) / sizeof(a[0]);

    printf("enter 5 values: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    result = getmax(a, len);
    printf("max element in array is:%d ", result);
    return 0;
}
int getmax(int b[], int size)
{
    if (i < size)
    {
        if (max < b[i])
        {
            max = b[i];
        }
        i++;

        return getmax(b, size);
    }
    else
    {
        return max;
    }
}