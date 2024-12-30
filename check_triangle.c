#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int a,b,c,sum;

    printf("\n inpute first side: ");
    scanf("%d",&a);
    printf("\n inpute second side: ");
    scanf("%d",&b);
    printf("\n inpute third side: ");
    scanf("%d",&c);

    sum=a+b+c;
    if (sum==180)
    {
        if (a==b&&b==c&&a==c)
        {
           printf("\nTriangle is equilateral triangle");
        }
        else if ((a==b||b==c)||(b==c||c==a)||(a==b||c==a))
        {
           printf("\nTriangle is Isosceles Triangle");
        }
        else
        {
          printf("\nTriangle is Scalene Triangle");  
        }
    }
    else
    {
        printf("triangle is not valid");
    }
    
    
    return 0;
}
