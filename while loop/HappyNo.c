
//a number which eventually reaches 1 when replaced by the sum of the square of each digit.
#include<stdio.h>
#include<conio.h>

int main(int argc, char const *argv[])
{
    int num,sum,square,rem;
    printf("enter a no: ");
    scanf("%d",&num);
    int temp=num;
    for (int i = 1; i < num; i++)
 {
    int num=i;
    
   while (num!=4)
   {
    sum=0;
        while (num>=1)
    {
        rem=num%10;
        square=rem*rem;
        sum=sum+square;
        num=num/10;  
    }
  // printf("\n%d",sum);
    if (sum==1)
    {
        printf("\n%d is happy number",i);
        break;
    }
    num=sum;
    }
    // else if (sum==4)
    // {
    //     printf("\n%d not is happy number",temp);
    //     break;
    // }
 }
   return 0;
}
