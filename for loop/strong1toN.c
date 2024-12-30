#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int num,fact=1,sum=0,temp,rem;
    printf("\n enter limit: ");
    scanf("%d",&num);
    //temp=num;

     for ( int i = 1; i <= num ; i++)
     {
         temp=i;
         sum=0;
        while (temp>0)
        { 
            fact=1;
            rem=temp%10;
           for(int j=1;j<=rem;j++)
            {
                fact=fact*j;
            }
            sum=sum+fact;
            temp=temp/10;
        }
           //printf("\nsum=%d",sum);
           if (sum==i)
           {
             printf("\n Strog number is :%d",i);
           }
     }
    return 0;
}
