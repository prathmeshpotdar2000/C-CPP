#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    int i=1,num;

    printf("enter table no: ");
    scanf("%d",&num);//5

    while (i<=10)
    {
         printf("%d ",num*i);
        i++;
    }
    return 0;
}
