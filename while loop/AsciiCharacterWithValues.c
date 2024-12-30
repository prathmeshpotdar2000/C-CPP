#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    char ch ;
    ch=65;
    int a=65;

    while (ch<=90&&a<=90)
    {
        printf("%c %d \n",ch,a);
        ch++;
        a++;
    }
    
    return 0;
}
