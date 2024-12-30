#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[5],count=1;

    printf("enter five elements: ");

    for (int i = 0; i < 5; i++)
    {
       scanf("%d",&a[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
           if (a[i]>a[j])
           {
             int temp=a[i];
             a[i]=a[j];
             a[j]=temp;
           }
           
        }
        
    }
    for (int i = 0; i <5; i++)
    {
       if (a[i]==a[i+1])
       
         ++count;
       
       else
       {
        printf("\n%d---%dtimes",a[i],count);
        count=1;
       }
       
    }
    
    return 0;
}
