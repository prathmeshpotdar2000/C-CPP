#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int index=1,power=1,i=1,base;
    printf("enter base: ");
    scanf("%d",&base);
    printf("enter index: ");
    scanf("%d",&index);

    while (i<=index)
    {
        power=power*base;
        i++;

        
    }
    printf("power is: %d",power);



    return 0;
}
