#include <stdio.h>
int i = 0;
int main(int argc, char const *argv[])
{
    int getSecondMax(int[], int); // declaration
    int a[5], len, result;
    len = sizeof(a) / sizeof(a[0]);
    printf("enter 5 values: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    result = getSecondMax(a, len);//call
    printf("secondMax element in array is:%d ", result);
    return 0;
}
int getSecondMax(int b[], int size)// 5 4 3 2 1 
{
    if (i < size)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (b[i] > b[j])
            {
                int temp = b[i];//5
                b[i] = b[j];//4
                b[j] = temp;//5
            }
        }
        i++;//1
         return getSecondMax(b, size);//recurtion 
    }
    else
    {
        return b[--size - 1];
    }
}