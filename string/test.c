
// Q1. WAP to input string and reverse it without using inbuilt function?

#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char first[90],second[90];
    int count=0,count1=0;
    printf("Enter string value: ");
    gets(first);
    printf("Enter string value: ");
    gets(second);
  
  
    while (second[count]!='\0')
    { 
        first[count]=second[count1];
        count1++;
        count++;
    }
    printf("\n length of string is %s",first);
    
    
    return 0;
}
