#include <stdio.h>
int i = 0,power=1;
int main(int argc, char const *argv[])
{
    int getPower(int,int); // declaration
    int result,base,index;
    printf("enter number : ");
      scanf("%d", &base);
       printf("enter index : ");
      scanf("%d", &index);
    result= getPower(base,index);
    printf("product of the digits is : %d",result);
    return 0;
}
int getPower(int n,int m)
{

    if (i < m)
    { 
         power=power*n;
        i++;
        return getPower(n,m);
    }
        // printf(" % d",count);
        else
        return power;
    
}