
//check palindrome without function in string

#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char first[90],a[90],b[90];
    int count=0,len=0,flag=0,end,mid,diff;

    printf("\n Enter the string: ");
    gets(first);

    while (first[len]!='\0')
    {
        len++;
    }
    printf("\n length is: %d",len);
    // strcpy(a,first);
    for (int i = 0; i < len; i++)
    {
       a[i]=first[i];
    }
     end=len-1;
    int start=0;
    
    mid=len/2;
    for ( start = 0; start < mid; start++)
    {
       char temp=first[start];
       first[start]=first[end];
       first[end]=temp;
       end--;
    }
    printf("\nreveres string is %s:",first);
    for (int i = 0; i <= end; i++)
    {
        //  printf("%c",first[i]);
        // b[i]=first[i];
        printf(" %c",first[i]);
    }

    //  strcpy(b,first);

    for (int i = 0; i <= '\0'; i++)
    {
        diff=a[i]-first[i];
        if (diff==0)
        {
           flag=1;
           break;
        }
        
    }
    if (flag)
    {
        printf("\nstring is palindrome");
    }
    else
    {
       printf("\nstring is not palindrome");
    }

    // int r=strcmp(a,b);
    // if (r==0)
    // {
    //     printf("\nstring is palindrome");
    // }
    // else
    // {
    //     printf("\n string is not palindrome");
    // }
    
    
    return 0;
}
