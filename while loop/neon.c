//neon number is whos sum of square is equal to the number ex:9
#include<stdio.h>
int main(int argc, char const *argv[])
{   
    int num,sum=0,rem;
    printf("enter a no: ");
    scanf("%d",&num);

    int sqare=num*num;
    printf("%d",sqare);

    while (sqare!=0)
    {
        rem=sqare%10;
        sum=sum+rem;
        sqare=sqare/10;
    }
    if (sum==num)
    {
        printf("\n%d is neon num",num);
    }
    else
    {
        printf("\n%d is not neon num",num);
    }
    return 0;
}
