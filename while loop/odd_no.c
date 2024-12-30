//print all odd no between 100
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    num=1;

    while (num<=100)
    {
        if (num%2==1)
        {
             printf(" %d",num);
        }
        
       num++;
    }
    
    return 0;
}
