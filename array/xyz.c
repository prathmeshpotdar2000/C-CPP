#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[5],count=0,b[5],count1=0; 
    printf("\n Enter elements of an array :");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for (int  i = 0; i < 5; i++)
    {
        if (a[i]==0)
        {
            count++;
        }   
    }
    int k=0;
    while (k<count)
    {
        /* code */
    
    
    for(int i=0;i<5;i++)
    {
        if(a[i]==0)
        {   
                b[i]=a[i];
            printf("\n k===%d",k);
            //  int temp1=a[i+1];
             for(int j=i;j<5;j++)
              {
                a[j]=a[j+1];  
              }
              a[5-k]=b[i];
                // a[5-1]=temp; 
            //    if (a[i+1]==0)
            //     {
            //         --i;
            //         break;
            //     }
            k++;
        } 
    }
    }
    for(int i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
}