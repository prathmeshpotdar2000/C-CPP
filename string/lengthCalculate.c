#include<stdio.h>

int main(int argc, char const *argv[])
{
    char name[90];
    int count=0;

    printf("\n Enter the characters: ");
    gets(name);

    while (name[count]!='\0')
    {
        count++;
    }
    
    printf("\n length of the string is: %d",count);

    return 0;
}
