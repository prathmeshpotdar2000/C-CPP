#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[7],count;
    printf("enter values in array: ");

    for (int i = 0; i < 7; i++)
    {
        scanf("%d",&a[i]);
    }
    

    for (int i = 0; i < 7; i++)
    {
        for (int j = i+1; j < 7; j++)
        {
            if (a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }
        
    }
    
     for (int i = 0; i < 7; i++)
    {
        count=1;
        for (int j = i+1; j < 7; j++)
        {
            if (a[i]==a[j])
            {
                count++;
                i++;
            }
            
        }
        printf("the no is %d and its count is %d\n",a[i],count);

    }
    
    
    return 0;
}
