#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[5];

    printf("enter values in array: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    
    int j=0;

    for (int i = 0; i < 5; i++)
    {
        if (a[i]!=0)
        {
            a[j]=a[i];
            j++;
        }
        
    }
    printf("after moving zeros to the end: ");

    for (; j < 5; j++)
    {
        a[j]=0;
        
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf(" %d",a[i]);
    }
    
    return 0;
}
