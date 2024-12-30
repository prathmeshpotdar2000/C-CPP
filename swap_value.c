// write a C program swap two number using third variable
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c;
printf(" enter the values of a:");
scanf("%d",&a);

printf(" enter the values of b:");
scanf("%d",&b);

c=a;
a=b;
b=c;

printf("\nvalue of a is: %d",a);
printf("\nvalue of b is: %d",b);

    return 0;
}
