#include<stdio.h>

int main(int argc, char const *argv[])
{
    char first[90];
    int count=0;

    printf("\n Enter the lowercase: ");
    gets(first);

    while (first[count]!='\0')
    {
        int temp=first[count];
        first[count]=first[count]+32;
        count++;
    }
    
    printf("\n uppercase string is: %s",first);

    return 0;
}
