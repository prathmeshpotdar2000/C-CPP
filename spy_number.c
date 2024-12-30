//spy no is that no whose sum of the digits and product of the digit should be same Ex:22,1412 

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,rem,sum=0,product=1;
    printf("enter the number");
    scanf("%d",&num);
    int num1=num;
    while (num!=0)
    {
        rem=num%10;
        num=num/10;
        sum=sum+rem;
        product=product*rem;
    }
    if (sum==product)
    {
       printf("%d is spy number",num1);

    }
    else{
         printf("%d is not spy number",num1);

    }
   
    return 0;
}
