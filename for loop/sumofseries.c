#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int num,sum=0,sum2=0;
    printf("enter nth number");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {   
        sum=0;
        for (int j = 1; j <= i; j++)

        {
            sum=sum+j;
            //printf("+%d=%d",i,sum); 
        }
              
        printf("\nsum=%d",sum);
         sum2=sum2+sum;
        
    }
    printf("\nsum of above series is %d",sum2);
    return 0;
}
