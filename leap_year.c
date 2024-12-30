//WAP to check a year is leap year or not
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int year;
    printf("Enter a year");
    scanf("%d",&year);
    if (year%4==0&&year%100==0&&year%400==0)
    {
        printf("This is leap year");
    }
    else
    {
        printf("This is not leap year");

    }
    
    
    return 0;
}
