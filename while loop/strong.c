//Check Number Is Strong Number or Not.
//strong no is the no whos sum of factorial their digits is equal to number itself ex:1,2,145,40585


#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num,i,f=1,sum,temp,rem,flag=0,temp2;
    printf("enter no: ");
    scanf("%d",&num);
    temp2=num;
    temp=num;
    
    while(temp!=0)
   {
          rem=temp%10;
          i=rem;
          f=1;
           while (i!=0)
            {
                f=f*i;
                i--;
            }

          temp/=10;
         printf("%d\n",f);
         sum=sum+f;
         if (sum==temp2)
         {
            flag=1;
            break;
         }     
   }
if(flag)
         {
            printf("number is strong");
         }
         else{
            printf("number is not strong");

         }
    return 0;
}

