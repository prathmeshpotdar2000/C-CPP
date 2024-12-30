#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    int num,count=0;
    printf("Enter no: ");
    scanf("%d",&num);

    while (num!=0)
    {
       num=num/10;
       count++;
    }
printf("digits in a number are %d",count);
    return 0;
}
