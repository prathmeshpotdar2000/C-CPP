//WAP to inpute cost price and selling price of a product and check profit or loss

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int cost,selling;
    printf(" enter cost price:");
    scanf("%d",&cost);

    printf(" enter selling price:");
    scanf("%d",&selling);
    if (selling>cost)
    {
        printf("profit");
        /* code */
    }
    else
    {
        printf("loss");
    }
    

    return 0;
}
