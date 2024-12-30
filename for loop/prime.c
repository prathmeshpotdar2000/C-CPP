#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num,count=0;
    printf("enter the limit: ");
    scanf("%d",&num);
    printf("prime numers are: ");

    for (int i = 2; i <= num; i++)
    {
        count=0;
        for (int  j = 1; j <= i; j++)
        {
            if (i%j==0)
            {
                count++;
            }   
        }
        if (count==2)
            {
               printf("%d ",i);
            }
    }
    return 0;
}
