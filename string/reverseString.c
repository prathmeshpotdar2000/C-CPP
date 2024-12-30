#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char first[90];
    int count=0,len=0;

    printf("\n Enter the string: ");
    gets(first);

    while (first[len]!='\0')
    {
        len++;
    }
    printf("\n length is: %d",len);
    int end=len-1;
    int start=0;
    int mid=len/2;
    for ( start = 0; start < mid; start++)
    {
       char temp=first[start];
       first[start]=first[end];
       first[end]=temp;
       end--;
    }
     printf("\n reverse %s",first);
    return 0;
}
