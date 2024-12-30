//armstrong no is number that equal to sum of its digits raised to power ex:153,370,371,407,1634,8208
#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    
    int num,count=0,sum=0,rem,power;
    printf("enter a no: ");
    scanf("%d",&num);
    
    int temp=num;
    while (num!=0)
    {
        
        num=num/10;
        count++;
       
    }
    //printf("%d",count);
    num=temp;
    while (num!=0)
    {
        rem=num%10;
        power=pow(rem,count);
         printf("%d\n",power);
        sum=sum+power;
        num/=10;
    }
    if (sum==temp)
    {
      printf("%d is armstrong no",temp);
    }
    else{
      printf("%d no is not armstrong",temp);
    }
    return 0;
}
