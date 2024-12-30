#include <stdio.h>
int i = 0;
int sum = 0;
int avg;
int main(int argc, char const *argv[])
{
    int getavg(int[], int);
    int a[5], len, result;
    len = sizeof(a) / sizeof(a[0]);

    printf("enter 5 values: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    result = getavg(a, len);
    printf("average of array is:%d ", result);
    return 0;
}
int getavg(int a[], int len)
{ 
    if (i < len)
    {
        sum = sum + a[i];
        i++;
         avg=sum/len;
        return getavg(a, len);
    }
    else
    {
        return  avg;
    }
}