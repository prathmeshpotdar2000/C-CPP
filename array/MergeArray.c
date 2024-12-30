#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[3],b[3],c[6];

    printf("enter elements in array a: ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
    printf("\nenter elements in array b: ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d",&b[i]);
        c[i+3]=b[i];
    }
    printf("\nmerge elements are:");
    for (int i = 0; i < 6; i++)
    {
        printf(" %d",c[i]);
    }
    
    return 0;
}
