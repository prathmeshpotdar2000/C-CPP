#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n,k,j,m,p,left;

    printf("Enter total no of monkeys: ");
    scanf("%d",&n);
        printf("Enter Number of eatable Bananas by Single Monkey: ");
    scanf("%d",&k);
        printf("Enter Number of eatable Peanuts by single Monkey: ");
    scanf("%d",&j);
        printf("Enter Total number of Bananas: ");
    scanf("%d",&m);
        printf("Enter Total number of Peanuts: ");
    scanf("%d",&p);
    
    int add=(m/k)+(p/j);
    left=n-add;

    printf("number of monkeys left on tree = %d",left);
    
    return 0;
}
