#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char a[90],b;
    int count=0,occu,flag=0;
    printf("Enter the string: ");
    gets(a);
    printf("enter the character: ");
    scanf("%c",&b);
    int len=strlen(a);
    occu=a[0];
    for (int i = 0; i < len; i++)
    {  
        // printf("\nouter loop character is %c ",a[i]);
       if (a[i]==b)
            {
              occu=a[i];
              count++;
            }
         
    }
              printf("\n occurance of %c is: %d",occu,count);  
    return 0;
}
