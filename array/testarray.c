#include <stdio.h>
int main(int argc, char const *argv[])
{

    int a[5];
    printf("enter array values");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\t%d", a[i]);
    }

    return 0;
}
