#include <stdio.h>
int main(int argc, char const *argv[])
{

    int size,count=0;
    
    printf("enter size of array: ");
    scanf("%d",&size);
    int a[size];
    printf("enter array values");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf(" %d", a[i]);
    }
    for (int i = 0; i < size; i++)
    {
       for (int j = i+1; j < size ; j++)
       {
         if (a[i]==a[j])
         {
            count++;
         }
         
       }
       
    }
    printf("\ncount=%d",count);
     if (count>size/2)
     {
       printf("\nThere are Majority Elements in the given array.");
     }
     else
     {
         printf("\nThere are no Majority Elements in the given array.");

     }
     
    return 0;
}
