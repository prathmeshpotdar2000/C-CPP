#include<stdio.h>

int main(int argc, char const *argv[])
{
int num1,num2,result;
char ch;
printf("enter two values:");
scanf("\n%d\n%d",&num1,&num2);

 printf("select operator(+,-,*,/)=");
 scanf(" %c",&ch);

    switch (ch)
    {
    case '+':
        result=num1+num2;
        break;

    case '-':
        result=num1-num2;
        break;    
    
    case '*':
        result=num1*num2;
        break;    
    
    case '/':
        result=num1/num2;
        break;    
    
    default:
        printf("invalid operator\n");
        //return 1;
      
    }
    printf("result=%d",result);

    return 0;

}