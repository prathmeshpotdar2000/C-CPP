#include <stdio.h>
int i = 0;
int main(int argc, char const *argv[])
{
    int getSmallest(int[], int); // declaration
    int a[5], len, result;
    len = sizeof(a) / sizeof(a[0]);

    printf("enter 5 values: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    result = getSmallest(a, len);
    printf("Smallest element in array is:%d ", result);
    return 0;
}
int getSmallest(int b[], int size)
{
    if (i < size)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (b[i] < b[j])
            {
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }

        i++;

        return getSmallest(b, size);
    }
    else
    {
        return b[--size];
    }
}