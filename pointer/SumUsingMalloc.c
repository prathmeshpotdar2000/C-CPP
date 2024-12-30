#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int *ptr,size,sum=0;
    printf("Enter size for array: ");
    scanf("%d",&size);

    ptr=(int*)malloc(sizeof(int)*size);
    printf("\nEnter values in an array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&ptr[i]);
    }
    
    for (int i = 0; i < size; i++)
    {
       sum=sum+ptr[i];
    }
    printf("%d ",sum);
    return 0;
}
