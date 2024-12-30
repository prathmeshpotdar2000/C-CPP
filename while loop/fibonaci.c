#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int f1=0,f2=1,fib,limit;
    printf("enter a limit: ");
    scanf("%d",&limit);

    printf("%d%d",f1,f2);

    while (limit!=0)
    {
       fib=f1+f2;
       f1=f2;
       f2=fib;
       printf("%d",fib);
       limit--;
    }
    

    return 0;
}
