#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[3],b[3];
    
    printf("enter 3 values for array a: ");
  
    for (int i = 0; i < 3; i++)
    {
       scanf("%d",&a[i]);
    }
    printf("\nenter 3 values for array b: ");
  
    for (int i = 0; i < 3; i++)
    {
       scanf("%d",&b[i]);
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = i+1; j < 3; j++)
        {
            if (a[i]<a[j])
            {
               int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                
            }   
             if (b[i]<b[j])
            {
               int temp=b[i];
                b[i]=b[j];
                b[j]=temp;
                
            }   
        }
    }
   printf("merge array after decending: ");
   for (int i = 0; i < 3; i++)
   {
    printf(" %d %d",a[i],b[i]);
   }
   
    return 0;
}
