#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int num,factor,i=1;

    printf("enter no: ");
    scanf("%d",&num);

    while (i<=num)
    {
        factor=num%i;
        if (num%i==0)
        {
            printf("\t%d",i);
        }
        i++;
    }
    
    return 0;
}
