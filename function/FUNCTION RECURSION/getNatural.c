#include <stdio.h>
int i = 0;
int main(int argc, char const *argv[])
{
    int getNatural(int); // declaration
    int num;
    printf("enter number : ");
      scanf("%d", &num);
    printf("the natural numbers are: ");
     getNatural(num);
    return 0;
}
int getNatural(int n)
{
    if (i <= n)
    { 
        printf(" %d",i);
        i++;
        return getNatural(n);
    }
    
}