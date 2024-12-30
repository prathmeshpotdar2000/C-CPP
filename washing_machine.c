#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int num;
    printf("enter weight of clothes(gm): ");
    scanf("%d",&num);

    if (num>0&&num<=2000)
    {
       printf("\ntime estimated:25 minutes");
    }
    else if (num>2000&&num<=4000)
    {
       printf("\ntime estimated:35 minutes");
    }
    else if (num>4000&&num<=7000)
    {
       printf("\ntime estimated:45 minutes");
    }
    else if(num>7000)
    {
        printf("\noverloaded");
    }
    else
    {
        printf("\ninvalid inpute");
    }
    
    
    return 0;
}
