#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[5],count=0,index;
    printf("enter values in array: ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("enter position which you want to delete: ");
    scanf("%d",&index);
   
    
     for (int i = 0; i < 5; i++)
    {
        if (a[i]==index)
        {
            for (int j = i+1; j < 5; j++)
            {
                int temp=a[i];
                a[i]=a[j];
                // a[j]=temp;
            }
               count++; 
               i--;         
        }
        
    }
    printf("after deleting element: ");
    for (int i = 0; i < 5-count; i++)
    {
        printf(" %d",a[i]);
    }
    
    
    return 0;
}
