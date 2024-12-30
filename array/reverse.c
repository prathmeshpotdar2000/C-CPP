#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int a[5];
    printf("enter five values in array");
    for (int i = 0; i < 5; i++)
    { 
        scanf("%d",&a[i]);
    }
    int mid=6/2;
    int end=4;
    for (int start = 0; start < mid; start++)
    {
       int temp=a[start];
       a[start]=a[end];
       a[end]=temp;
       end--;

    }
    end=4;
    printf("values after reverse: ");

    for (int i = 0; i <= end; i++)
    {
       printf("\t%d",a[i]);
    }
    
    return 0;
}
