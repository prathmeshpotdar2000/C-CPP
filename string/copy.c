#include<stdio.h>
#include<string.h>
int main()
{
    char first[50],second[50];
    int count=0,count1=0;
    printf("\n Please enter a first string :");
    gets(first);
   int len=strlen(first);
   printf("\nlen is %d",len);
    while(count<len)
    {
        second[count]=first[count];
        count++;
        // count1++;
    }
    second[len]='\0';
     printf("\n The Second string is :%s",second);
    //  printf("\n The First string is :%s",first);
}