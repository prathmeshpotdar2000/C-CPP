#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int a,b,c;

    printf("\n inpute first angle: ");
    scanf("%d",&a);
    printf("\n inpute second angle: ");
    scanf("%d",&b);

    c=180-(a+b);
    printf("\n third angle = %d",c);
    
    
    return 0;
}
