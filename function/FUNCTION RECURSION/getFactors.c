#include <stdio.h>
int i = 1;
int main(int argc, char const *argv[])
{
    int getFactors(int); // declaration
    int num;
    printf("enter number : ");
      scanf("%d", &num);
    printf("the natural numbers are: ");
     getFactors(num);
    return 0;
}
int getFactors(int n)
{
    if (i < n)
    { 
       if(n%i==0)
       {
        printf(" %d",i);    
       }
        i++;
        return getFactors(n);
    }
    
}