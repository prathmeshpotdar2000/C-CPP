//duck no is that no which contains 0 in its digit
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,num,digit,temp,flag,n;
    printf("enter limit from keyboard: ");
    scanf("%d",&num); // 100
    
    //temp=num;
    for (i = 1; i <=num; i++)  //
    {
        flag=0;
          n=i;  
     while (n>0)
     {
       digit=n%10;
         if(digit==0)
      {
        flag=1;
        break;
        //printf(" %d",i);
      }
      n=n/10;
     }

     if(flag==1)
     {
      printf(" %d",i);  // 10
     }
      
    }
    
    return 0;
}
