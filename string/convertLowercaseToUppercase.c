#include<stdio.h>

int main(int argc, char const *argv[])
{
    char first[90];
    int count=0;

    printf("\n Enter the lowercase: ");
    gets(first);
    char temp[90];
    while (first[count]!='\0')
    {
        temp[count]=first[count];
        first[count]=first[count]-32;
        count++;
    }
    temp[count]='\0';
    printf("\n before convert string is:%s",temp);
    printf("\n uppercase string is: %s",first);

    return 0;
}
