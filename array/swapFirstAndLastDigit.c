#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[5];
    printf("enter values in array:");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    int start=a[0];
    int end=a[4];
    for(int i = 0; i < 5; i++)
    {
        int temp=start;
        a[i]=a[i+1];
        end=start;
    }
printf("array after swapping:");
    for (int i = 0; i < 5; i++)
    {  
        printf(" %d",a[i]);
    } 
    return 0;
}