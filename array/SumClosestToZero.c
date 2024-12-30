#include <stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int a[10], sum,minsum,minpair1,minpair2;
    printf("enter array: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    minpair1=a[0];
    minpair2=a[1];
    minsum=minpair1+minpair2;

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            sum=a[i]+a[j];
            if (abs(sum) < abs(minsum))
            {
                minsum = sum;
                minpair1=a[i];
                minpair2=a[j];
                // printf("\n %d %d",a[i],a[j]);
            }
        }
    }
     printf("The Pair of elements whose sum is minimum are: %d %d",minpair1,minpair2);
    // for (int i = 0; i < 10; i++)
    // {
    //     printf(" %d", a[i]);
    // }

    return 0;
}
// 38 44 63 -51 -35 19 84 -69 4 -46