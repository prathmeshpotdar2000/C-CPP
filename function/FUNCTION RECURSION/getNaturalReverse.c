#include <stdio.h>
int i = 0;
int main(int argc, char const *argv[])
{
    int getNaturalReverse(int); // declaration
    int num;
    printf("enter number : ");
      scanf("%d", &num);
      i=num;
    printf("the natural numbers are: ");
     getNaturalReverse(num);
    return 0;
}
int getNaturalReverse(int n)
{
    if (i >= 0)
    {
        
        printf(" %d",i);
        i--;
        return getNaturalReverse(n);
    }
    
}