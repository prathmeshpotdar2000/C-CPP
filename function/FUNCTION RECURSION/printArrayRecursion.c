#include <stdio.h>
int i = 0;
int main(int argc, char const *argv[])
{
    int getArray(int[], int);
    int a[5], len;
    len = sizeof(a) / sizeof(a[0]);

    printf("enter 5 values: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("dispaly array: ");
    getArray(a, len);

    return 0;
}
int getArray(int a[], int len)
{
    if (i < len)
    {
        printf(" %d", a[i]);
        i++;
    }
    getArray(a, len);
}