#include<stdio.h>
void power();
int main(int argc, char const *argv[])
{
     power();
     printf("\nonce again");
     power();
    return 0;
}
void power()
{
    int base,index,power=1;
    printf("\nenter base: ");
    scanf("%d",&base);
    printf("\nenter index: ");
    scanf("%d",&index);

    for (int i = 1; i <= index; i++)
    {
        power=power*base;
    }
    printf("\npower is %d",power);

}