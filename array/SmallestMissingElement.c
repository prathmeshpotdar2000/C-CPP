#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[5], m, flag = 1;
    printf(" enter numbers in array: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

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

    for (int i = 0; i < 4; i++)
    {
        m = a[i] + 1;
        while (m < a[i + 1])
        {
            if (m < a[i + 1])
            {

                flag = 0;
                break;
            }
            m++;
        }
        if (flag == 0)
        {
            break;
        }

        // m=a[i]+1;
        // while (m<a[i+1])
        // {
        //     if (flag==1)
        //     {
        //    printf(" %d",m+1);
        //   break;

        //     }
        //       m++;

        // }
        // if (flag==1)
        // {
        //     break;
        // }
    }

    printf("\nsmallest missing element is:%d", m);
    return 0;
}
