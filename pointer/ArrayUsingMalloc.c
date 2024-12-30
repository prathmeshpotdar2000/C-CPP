#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int *ptr,size,i;
    printf("Enter size for array: ");
    scanf("%d",&size);

    ptr=(int*)malloc(sizeof(int)*size);
    printf("\nEnter values ina array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("\nDisplay array values: ");
    for (int i = 0; i < size; i++)
    {
       printf("%d ",ptr[i]);
    }
    
    return 0;
}
