#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char f[90],s[90];
    int count=0,diff,flag=0;

    printf("\n Enter the characters for first str: ");
    gets(f);
    printf("\n Enter the characters for second str: ");
    gets(s);

    int flen=strlen(f); 
    int slen=strlen(s);

    if (flen==slen)
    {
        while (f[count]!='\0')
        {
            diff=f[count]-s[count];
            if (diff==0)
            {
                flag=1;
                break;   
            }
            ++count;
        }
        if (flag==1)
        {
            printf("Strings are equal");
        }
        else if(flen!=slen||flag==0)
    printf("Strings are not equal");
    }
    
    return 0;
}
