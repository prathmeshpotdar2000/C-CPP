#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[5], n, floor, ceiling;

    printf("\nenter five values: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    n = 0;
    while (n <= 10)
    {

        for (int i = 0; i < 5; i++)
        {
            for (int j = i + 1; j < 5; j++)
            {
                if (a[i] > a[j])
                {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }

        for (int i = 0; i < 5; i++)
        {

            if (n < a[0])
            {
                floor = -1;
                ceiling = a[0];
                break;
            }
            else if (n > a[4])
            {
                floor = a[4];
                ceiling = -1;
                break;
            }
            else if (n == a[i])
            {
                floor = a[i];
                ceiling = a[i];
                break;
            }
            else if (n > a[i] && n < a[i + 1])
            {
                floor = a[i];
                ceiling = a[i + 1];
                break;
            }
        }

        printf("\nfor%d ceiling=%d and floor=%d", n, ceiling, floor);
        n++;
    }

    return 0;
}
