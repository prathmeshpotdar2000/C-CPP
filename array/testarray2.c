#include <stdio.h>
int main(int argc, char const *argv[])
{

    int a[10],sum=0;
    printf("enter array values");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("\t%d", a[i]);
        sum=sum+a[i];
    }
     printf("\nsum=%d", sum);
    return 0;
}
