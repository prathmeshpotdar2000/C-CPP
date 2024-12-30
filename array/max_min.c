#include<stdio.h>
int main(int argc, char const *argv[])
{
    int max,min,len;
    printf("enter len of an array: ");
    scanf("%d",&len);
    printf("enter %d values in array: ",len);
   int a[len];
    for (int i = 0; i < len; i++)
    {
       scanf("%d",&a[i]);
    }
    for (int i = 0; i < len; i++)
    {
        for (int j = i+1; j < len; j++)
        {
            if (a[i]>a[j])
            {
               int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }   
        }
    }
    min=a[0];
     printf("minimum value in the array is:%d",min);
    max=a[len-1];
     printf("\nmaximum value in the array is:%d",max);    
    return 0;
}
