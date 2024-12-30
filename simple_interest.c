#include<stdio.h>
 int main(int argc, char const *argv[])
 {
    float principle,rate,time,simple_interest,final_value;
    printf("\nenter principle value: ");
        scanf("%f",&principle);

    printf("\nenter rate: ");
        scanf("%f",&rate);

    printf("\nenter time: ");
        scanf("%f",&time);


    
    

    simple_interest=(principle*rate*time)/100;

    printf("simple interest is: %f",simple_interest);
    
    final_value=principle+simple_interest;

    printf("\nfinal value is: %f",final_value);


    return 0;
 }
 