#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[5],temp;
    printf("enter values in array:");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    int start=a[0];
    int end=4;
    for(int i = 0; i < 5; i++)
    {
        // int temp=start;
        if (a[i]==0)
        {

            temp=a[i];
            for (int j = i+1; j < 5; j++)
            {
                a[i]=a[j];
                 
            }
            a[end]=temp;  
          
             
        }
         
        //    end=temp;
    }
printf("array after swapping:");
    for (int i = 0; i < 5; i++)
    {  
        printf(" %d",a[i]);
    } 
    return 0;
}