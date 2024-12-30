#include<stdio.h>

int main(int argc, char const *argv[])
{
    int value,index,len;
    printf("enter size of array: ");
    scanf("%d",&len);
    int a[len];
    printf("\nenter %d values in array: ",len-1);
    for (int i = 0; i < len; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nenter value to be insertd: ");
    scanf("%d",&value);
    printf("\nenter index where value to be insered: ");
    scanf("%d",&index);

    for (int i = 5; i >=index ; i--)//for shifting array values 
    {
        a[i+1]=a[i];
    }
    a[index]=value;
    printf("\narray after inserting element: ");
    for (int i = 0; i < 6; i++)
    {
       printf(" %d",a[i]);
    }
    
    return 0;
}
