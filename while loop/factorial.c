#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    int num;
    printf("enter no: ");
    scanf("%d",&num);
    int i=num-1;
    while (i!=0)
    {
        num=num*i;
        i--;
    }
     printf("factorial is %d",num);

    return 0;
}
