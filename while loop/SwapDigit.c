#include<stdio.h>

int main(int argc, char const *argv[])
{
    long int fnum,lnum,num,count=0,swap=0,i=1,p=1;
    printf("\n please enter the number: ");
    scanf("%ld",&num);

    int temp=num;   //temp=12345
    int temp2=num;  //temp2=12345

    lnum=num%10;  //lnum=12345%10=5   // 1 2 3 4 5
    num/=10; //12345/10=1234
      
       while (temp2>=10)
       {
          temp2/=10;
           count++;
       }
        printf("\nFirst Digit is %ld\n",temp2);//==1
         printf("count is %ld\n",count);
        
          while(i<count)
          {
              p*=10;
              i++;
          }
          printf("p=%ld",p);
           long int mid;
            mid=num%p;
            printf("\nmid=%ld",mid);
            i=1;
             while(i<=count)
          {
              lnum*=10;
              i++; 
          }
           printf("\nlast digit is %ld",lnum);
      mid*=10;
        swap= lnum+mid+temp2;  
         printf("\nswapping number is %ld",swap);     
      //12345


    // while (num>=10)
    // {
    //     num=num/10; // 1234/10=123/10=12
    // }
    // fnum=num; //fnum=12
    // while (temp>0)
    // {        
    //     temp=temp/10;//12345/10=1234(1)/10=123(2)/10=12(3)/10=1(4)
    //     count++;
    // }
    // --count;
    // int power=pow(10,count);//10^3=1000
    // int newnum=temp2%power;//12345%1000=234
    // printf("%ld",newnum);
    // newnum=newnum/10;//12/10=1

    // swap=lnum*power+newnum*10+fnum;//4*100+1*10+12
    // printf("\n swap number is:%ld",swap);


    
    return 0;
}
