#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char a[90];
    int count=0;
    printf("Enter the string: ");
    gets(a);
    int len=strlen(a);
    for (char i = 'a'; i <= 'z' ; i++)
    {  
        count=0;
        // printf("\nouter loop character is %c ",a[i]);
        for (int j =0; a[j]!= '\0'; j++)
        {
            //  printf("\ninner loop character is %c",a[j]);
            if (i==a[j])
            {
                 count++;
            }
        
        }
        if (count>0)
        {
    printf("\n occurance of character is %c and its count is %d",i,count);

        }
        
         
    }
    return 0;
}
