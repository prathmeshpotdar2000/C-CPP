#include <stdio.h>
int i = 1,f,temp,sum=0,k=1;
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

    if ( k<=n)
    { 
        for (int j = 1; j <=k ; j++)
        {
            temp=j;
        
        
        f=1;
        int rem=temp%10;
        i=rem;
        while (i>0)
        {
           f=f*i;
            i--;
        }
        //  printf(" %d",f);
        sum=sum+f;
        //   printf("sum is %d",sum);
        if (sum==k)
        {
            printf("strong number are %d",j);
        }
        temp=temp/10;
        k++;
       }
        return getFactorial(n);
    }

}