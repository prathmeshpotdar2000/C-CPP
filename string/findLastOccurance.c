#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char temp,a[90];
    int count=1,flag=0,count1=1;
    printf("Enter the string: ");
    gets(a);
    int len=strlen(a);
    for (int i =0; i < len; i++)
    {  
      
        // printf("\nouter loop character is %c ",a[i]);
        for (int j = 0;j < len; j++)
        {
            //  printf("\ninner loop character is %c",a[j]);
            if (a[i]==a[j])
            {
                 temp=a[i];
                 count++;
            }
        }    
        // printf("%c",a[i]) ;
        count=1;
    }
    printf("\nlast occurance is %c and its count is %d",temp,count);
    return 0;
}
