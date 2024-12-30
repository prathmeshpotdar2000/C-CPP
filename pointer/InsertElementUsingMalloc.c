#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int *ptr,size,index,value;
    
    printf("enter size of array: ");
    scanf("%d",&size);

    ptr=(void*)calloc(sizeof(int),size);
    printf("enter %d values in array: ",size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("enter index where insert the element: ");
    scanf("%d",&index);
    printf("enter the value for inserting: ");
    scanf("%d",&value);

    for (int i = size; i >= index; i--)
    {
        ptr[i+1]=ptr[i];
    }
    ptr[index]=value;
    printf("Array after inserting the element: ");
    for (int i = 0; i <= size; i++)
    {
       printf(" %u",*ptr);
       ptr++;//1000+1*4=1004
    }
    

    return 0;
}
