#include<stdio.h>

int num1=0;
int main(int argc, char const *argv[])
{
    int getAsciiCharacter(char,int);
     char ch=65;
     int num=65;
    getAsciiCharacter(ch,num);
    return 0;
}

int getAsciiCharacter(char n,int m)
{
   
    if (n<=90&&m<=90)
    {
       printf("\n %c %d",n,m);
       n++;
       m++;
       getAsciiCharacter(n,m);
    }
   
}