#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int no,i=1,count=0;
    printf("enter no: ");
    scanf("%d",&no);

    while (i<=no)
    {
       if (no%i==0)
       {
        count++;
       }

         i++;
    }
    if (count==2)
    {
      printf("%d is prime no",no);
    }
    else
    {
      printf("%d is not prime no",no);
 
    }
    
    
    return 0;
}
