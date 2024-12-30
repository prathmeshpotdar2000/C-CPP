//print all natural 1 to n no using while loop
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i=1;
    printf("enter value: ");
    scanf("%d",&n);

    while (i<=n )
    {
        
        printf("\n%d",i);
        i++;
    }
    
    return 0;
}
