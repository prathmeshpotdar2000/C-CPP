#include<stdio.h>

int main(int argc, char const *argv[])
{
    char first[90];
    int count=0,count1=1;

    printf("\n Enter the string: ");
    gets(first);

    while (first[count]!='\0')
    {
        if ((first[count]==' '))
        {
            count1++;
        }
        count++;
    }
    printf("\n words are: %d",count1);
    return 0;
}
