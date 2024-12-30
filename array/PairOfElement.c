#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[5],sum;
    printf("Enter five elements: ");
    
    for (int i = 0; i < 5; i++)
    {
       scanf("%d",&a[i]);
    }
    printf("Enter value of sum: ");
    scanf("%d",&sum);
    for (int i = 0; i < 5; i++)
    {
       for (int j = i+1; j < 5; j++)
       {
         if (a[i]+a[j]==sum)
         {
            printf("\n %d %d",a[i],a[j]);
         }
         

       }
       
    }
    
    
    return 0;
}
