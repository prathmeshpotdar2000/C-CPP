#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[5], n, floor, ceiling,count=0;

    printf("\nenter five values: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    do
    {
        printf("\nenter the number: ");
        scanf("%d", &n);

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
        printf("sorted array is: ");
        for (int i = 0; i < 5; i++)
        {
            printf(" %d", a[i]);
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

        printf("\nfor%d floor=%d and ceiling=%d", n, floor, ceiling);
     count++;
    } while (count<5);
    return 0;
}
