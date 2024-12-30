#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int num,cube;
    printf("enter number limit: ");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cube=j*j*j;
        }
        printf("\ncube of %d = %d",i,cube);
    }
    
    return 0;
}
