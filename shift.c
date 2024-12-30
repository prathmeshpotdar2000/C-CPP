#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a=10,b=5,c;
    c=a & b + 6 << 2 / 9 & 8;
    printf("c = %d \n",c);
    return 0;
}
