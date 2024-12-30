#include <stdio.h>
int i = 1,f=1;
int main(int argc, char const *argv[])
{
    int getFactorial(int); // declaration
    int num,result;
    printf("enter number : ");
      scanf("%d", &num);
     result= getFactorial(num);
     printf("factorial is:%d",result);
    return 0;
}
int getFactorial(int n)
{
    if (i <= n)
    { 
        f=f*i;
        i++;
        return getFactorial(n);
    }
    else
    return f;
}