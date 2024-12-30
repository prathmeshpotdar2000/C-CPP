#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    
    float compound_interest,principle,time,rate;

    printf("enter principle value: ");
    scanf("%f",&principle);
    
     printf("enter time: ");
    scanf("%f",&time);

     printf("enter rate: ");
    scanf("%f",&rate);

    compound_interest=principle*(pow(1+rate/100,time));//CI=p(1+r/100)^t

    printf("compound interest=%f",compound_interest);
    return 0;
}
