//armstrong no is no whose sum of digits raise power is equal to itself 370,371,407 
#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int num,rem,sum=0,power,count=0;
    printf("enter the limit of number: ");
    scanf("%d",&num);
    
    
    for (int i = 1; i <= num; i++)
    {
        int temp=i;
       //i=num;
       sum=0;
       int temp2=temp;
       count=0;
       while (temp>0)
       {
        //  rem=num%10;
         temp=temp/10;
         count++;
       }
       //printf("count=%d",count);
       
       //temp=temp2;
       while (temp2>0)
         {
            rem=temp2%10;
            power=pow(rem,count);
            //printf("%d\n",power);
            sum=sum+power;
            temp2=temp2/10;

         }
         if (i==sum)
       {
        printf("\narmstrong no are %d ",i);
       }

      
       
    }
     


    return 0;
}
