#include <stdio.h>
int main(int argc, char const *argv[])
{

    int a[7], count = 1;
    printf("Enter array elements");
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("before assending: ");
    for (int i = 0; i < 7; i++)
    {
        printf(" %d", a[i]);
    }

    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 7; j++)
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
    for (int i = 0; i < 7; i++)
    {
        printf(" %d", a[i]);
    }

    for (int i = 0; i < 7; i++)
    {
        if (a[i]==a[i+1])
            ++count;
        else
        {
            printf("\n%d---%d times",a[i],count);
            count=1;
        }

    }

    // for (int i = 0; i < 7; i++)
    // {
    //     for (int j = i + 1; j < 7; j++)
    //     {
    //         if (a[i] == a[j])
    //         {
    //             count++;
    //             i++;
    //         }
    //     }
    //     printf("\n%d---%d times", a[i], count);
    //     count = 1;
    // }
    return 0;
}
