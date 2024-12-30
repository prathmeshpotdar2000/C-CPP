#include<stdio.h>

int main(int argc, char const *argv[])
{
    char first[90];
    int count=0,count1=0,count2=0,count3=0;

    printf("\n Enter the string: ");
    gets(first);

    while (first[count]!='\0')
    {
        if ((first[count]>=65&&first[count]<=90)||(first[count]>=97&&first[count]<=122))
        {
            count1++;
        }
        else if (first[count]>=48&&first[count]<=57)
        {
           count2++;

        }
        else
        {
           count3++;

        }
        count++;
    }
    printf("\n alphabets are %d",count1);
    printf("\n numbers are %d",count2);
    printf("\n special character are %d",count3);
    return 0;
}
