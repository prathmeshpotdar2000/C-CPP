#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    int num,rem=0,flag=0;
    printf("enter no: ");
    scanf("%d",&num);

    while (num!=0)
    {
        rem=num%10;
        num=num/10;
       
       if (rem==0)
        {
            flag=1;
            break;
        }
    }    
     if (flag)
        {
           printf("\nno is duck");
        }
        else
        {
           printf("\nno is not duck");
        }

    return 0;
}
