#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int *ptr,m,size;
    printf("enter size of array: ");
    scanf("%d",&size);
    ptr=(int*)calloc(size,sizeof(int));
    printf("enter values in array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf(" %u--->%d ",ptr);
        ptr++;
    }
    
    
    return 0;
}
