#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[5],*ptr;
    ptr=a;
    printf("enter values in array: ");
    
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",ptr+i);
    }
    
    printf("array after using pointer: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",*(ptr+i));
    }
    
    return 0;
}
