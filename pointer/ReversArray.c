#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[5],*ptr,end,mid;
    ptr=a;
    printf("enter the values in array: ");
    for (int i = 0; i < 5; i++)
    {
      scanf("%d",ptr+i);
    }
    mid=*(ptr+4)/2;
    //printf("%d",mid);
    end=4;
    for (int start = 0; start <= mid; start++)
    {
       int temp=*(ptr+start);
       *(ptr+start)=*(ptr+end);
       *(ptr+end)=temp;
        end--;
    }
    
   end=4;
   printf("After reverse array is: ");
   for (int i = 0; i <= end; i++)
   {
     printf(" %d",*(ptr+i));
   }
   

    return 0;
}
