#include <stdio.h>
int i = 1,count=0;
int main(int argc, char const *argv[])
{
    int checkPrime(int); // declaration
    int num;
    printf("enter number : ");
      scanf("%d", &num);
     checkPrime(num);
    return 0;
}
int checkPrime(int n)
{
    if (i <= n)
    { 
       if(n%i==0)
       {
        count++;
         
       }
        i++;
        return checkPrime(n);
    }
    //  printf(" %d",count);  
     if (count==2)
     {
        printf("number is prime number ");
     }
     else
       printf("number is not prime number ");

}