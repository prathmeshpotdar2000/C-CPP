
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[5];

    printf("enter elements in array a: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\neven elements in array: ");
    for (int i = 0; i < 5; i++)
    {
      if (a[i]%2==0)
      {
        printf(" %d",a[i]);
      }
      
        
    }
    printf("\nodd elements are:");
    for (int i = 0; i < 5; i++)
    {
         if (a[i]%2==1)
      {
        printf(" %d",a[i]);
      }
    }
    
    return 0;
}
