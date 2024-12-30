#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[5], count = 0, n;
    printf("enter five values in array: ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nenter delete element: ");
    scanf("%d", &n);
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == n)
        {
            count++;

            for (int j = i; j < 5; j++)
            {
                a[j] = a[j + 1];
            }
            i--;
        }
    }
    printf("\nafter deleting element ");
    for (int i = 0; i < 5 - count; i++)
    {

        printf(" %d", a[i]);
    }

    return 0;
}
