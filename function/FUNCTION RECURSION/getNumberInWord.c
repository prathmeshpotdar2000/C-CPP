#include <stdio.h>
int digit,temp,num1;
int main(int argc, char const *argv[])
{
    int getNumberInWord(int); // declaration
    int num,result;
    printf("enter number : ");
      scanf("%d", &num);
      temp=num;
    result= getNumberInWord(num);
    return 0;
}
int getNumberInWord(int n)
{
   while (temp>0)
   {
    int rem=temp%10;
    num1=num1*10+rem;  
    temp=temp/10;
   }
    if (num1 > 0)
    {  
        digit=num1%10;
        if (digit==1)
       printf(" one");
       if (digit==2)
       printf(" two");
       if (digit==3)
       printf(" three");
       if (digit==4)
       printf(" four");
       if (digit==5)
       printf(" five");
       if (digit==6)
       printf(" six");
       if (digit==7)
       printf(" seven");
       if (digit==8)
       printf(" eight");
       if (digit==9)
       printf(" nine");
       if (digit==0)
       printf(" zero");
    
         num1=num1/10;
        return getNumberInWord(n);
    }
       
    
}