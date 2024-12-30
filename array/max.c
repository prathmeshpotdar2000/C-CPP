#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[5],max;
    printf("enter five values in array: ");

    for (int i = 0; i < 5; i++)
    {
       scanf("%d",&a[i]);
    }
    max=a[0];

    for (int i = 0; i < 5; i++)
    {
       if (a[i]>max)
       {
         max=a[i];
       }
       
    }
    printf("max value is %d",max);
    for (int i = 0; i < 5; i++)
    {
      if (a[i]<max)
      {
        max=a[i];
      }
      
    }
    printf("\nmin value is %d",max);
    return 0;
}
