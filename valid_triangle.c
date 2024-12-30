#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int f_a,s_a,t_a,sum;

    printf("\n inpute first angle: ");
    scanf("%d",&f_a);
    printf("\n inpute second angle: ");
    scanf("%d",&s_a);
    printf("\n inpute third angle: ");
    scanf("%d",&t_a);

    sum=f_a+s_a+t_a;
    if (sum==180)
    {
        printf("triangle is valid");
    }
    else
    {
        printf("triangle is not valid");
    }
    
    
    return 0;
}
