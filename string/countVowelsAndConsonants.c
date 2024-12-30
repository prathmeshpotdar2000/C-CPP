#include<stdio.h>

int main(int argc, char const *argv[])
{
    char first[90];
    int count=0,count1=0,count2=0;

    printf("\n Enter the string: ");
    gets(first);

    while (first[count]!='\0')
    {
        if ((first[count]=='a'||first[count]=='e'||first[count]=='i'||first[count]=='o'||first[count]=='u'))
        {
            count1++;
        }
        else
        {
            count2++;
        }
        count++;
    }
    printf("\n consonants are %d",count1);
     printf("\n vowels are %d",count2);
    return 0;
}
