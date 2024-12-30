#include<stdio.h>
int main()
{
    int size;
    printf("\n Please enter size of array : ");
    scanf("%d",&size);
    int arr[size];
    int count=1;
    printf("\n Please enter the elements of array : ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                  int temp=arr[i];
                  arr[i]=arr[j];
                  arr[j]=temp;
            } 
        }
    }
    
   for(int i=0;i<size;i++)
   {
        if(arr[i]==arr[i+1])
        count++;
         else{
         printf("\n %d times,%d",arr[i],count);
        count=1;
     }
   }   
}