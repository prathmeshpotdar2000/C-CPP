#include<stdio.h>
int main(int argc, char const *argv[])
{
    int base,index,*ptr1,*ptr2,power=1;
    printf("enter a base:");
    scanf("%d",&base);

     printf("enter an index:");
    scanf("%d",&index);

    ptr1=&base;
    ptr2=&index;

    for (int i = 0; i < *ptr2; i++)
    {
         power = power**ptr1;
    }
    
    printf("power is:%d",power);
    return 0;
}
