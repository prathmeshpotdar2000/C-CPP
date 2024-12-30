// write a C program swap two number without using third variable
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
   

    printf("\n%d",a);

    printf("\n%d",b);


    return 0;
}
