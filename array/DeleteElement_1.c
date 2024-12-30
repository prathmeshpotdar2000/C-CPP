#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[5], n;
    printf("enter five values in array: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter delete element: ");
    scanf("%d", &n);
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0 + i; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nafter assending: ");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d", a[i]);
    }
    printf("\nafter deleting the element: ");
    for (int i = 0; i < 5; i++)
    {
        if (n == a[i])
        {
            continue;
        }
        printf(" %d", a[i]);
    }
    return 0;
}
