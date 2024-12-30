#include<stdio.h>

int main(int argc, char const *argv[])
{
    int no,digit;
    printf("enter a number");
    scanf("%d",&no);

    while (no>0)
    {
        digit=no%10;
        no=no/10;
        printf("\n%d",digit);

    }
    
    return 0;
}
