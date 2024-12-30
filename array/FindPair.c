#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[6],sum,count=1;
    printf("enter five values in array: ");

    for (int i = 0; i < 6; i++)
    {
       scanf("%d",&a[i]);
    }
  printf("enter sum: ");
  scanf("%d",&sum);

     printf("\n pair is: ");
    for (int i = 0; i < 6; i++)
    {
      for (int j = i+1; j < 6; j++)
      {
       if (a[i]+a[j]==sum && count==1)
       {
         printf(" %d %d",a[i],a[j]);
         count=0;
       }
       
      }
      
    }
    
   
    return 0;
}
