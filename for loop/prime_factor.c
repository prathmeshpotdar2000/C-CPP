#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int num,factor,rem,count;
    printf("enter a number");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        int temp=num;
        count=0;
        for (int j = 1; j <= i; j++)
        { //factor=i%j;
            if (i%j==0)
            { 
               // printf("\nfactor=%d",j); 
               count++;       
            }
        }     
                if (count==2&&temp%i==0)
                {
                   printf("\nprime factor=%d",i);
                }       
        
    }
    return 0;
}
