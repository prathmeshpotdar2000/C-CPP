//print all even no between 100
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    num=2;

    while (num<=100)
    {
        if (num%2==0)
        {
             printf(" %d",num);
        }
        
       num++;
    }
    
    return 0;
}
