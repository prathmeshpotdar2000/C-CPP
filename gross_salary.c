//WAP to input basic salary of an employee and calculate its gross salary to following
/* 
Basic salary<=10000:HRA=20%,DA=80%
Basic salary<=20000:HRA=25%,DA=90%
Basic salary<=20000:HRA=30%,DA=95%
*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int bs,gs,hra,da;
    printf("enter basic salary");
    scanf("%d",&bs);

    
    if (bs <= 10000)
    {
        hra = bs * 20 / 100;
        da = bs * 80 / 100;
    }else if (bs<=20000)
    {
         hra = bs * 25 / 100;
        da = bs * 90 / 100;
    
    }else
    { 
        hra = bs * 30 / 100;
        da = bs * 95 / 100;
    }
    
    
    
          gs = bs + hra + da;

    printf("gross salary:%d",gs);

    return 0;
}
