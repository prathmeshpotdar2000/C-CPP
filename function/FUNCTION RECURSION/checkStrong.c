#include <stdio.h>
int i = 1,f=1,temp,sum=0;
int main(int argc, char const *argv[])
{
    int getFactorial(int); // declaration
    int num,result;
    printf("enter number : ");
      scanf("%d", &num);
      temp=num;

    getFactorial(num);
  
    return 0;
}
int getFactorial(int n)
{
    if ( temp>0)
    { 
        f=1;
        int rem=temp%10;
        i=rem;
        while (i>0)
        {
           f=f*i;
            i--;
        }
        // printf(" %d",f);
        sum=sum+f;
        //  printf("sum is %d",sum);
        temp=temp/10;
       
        return getFactorial(n);
    }
    if (sum==n)
        {
            printf("strong number");
        }
        else
        printf("not strong number");
}