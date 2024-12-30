#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int num,digit,flag=0,rem;
    printf("enter the no: ");
    scanf("%d",&num);
    printf("enter the digit: ");
    scanf("%d",&digit);

    while (num!=0)
    {
        rem=num%10;
        num=num/10;

        if (rem==digit)
        {
           flag=1;
           break;
        }
        
    }
       if (flag)
       {
         printf("digit found");
       }
       else
       {
        printf("digit not found");

       }
       

    return 0;
}
