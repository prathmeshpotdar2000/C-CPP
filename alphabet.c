//WAP to check charactor is alphabet or not

#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    printf("enter a charactor:");
    scanf("%c",&ch); 
    if ((ch>= 65 && ch<=90) || (ch>=97 &&ch<=122))
    {
       printf("charactor is alphabet"); 
    }
    else
    {
        printf("charactor is not alphabet");
    }
    return 0;
}
