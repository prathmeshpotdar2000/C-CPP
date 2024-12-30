#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char f[90],s[90];
    int count=0;

    printf("\n Enter the characters for first str: ");
    gets(f);
    printf("\n Enter the characters for second str: ");
    gets(s);

    int flen=strlen(f); 
    while (s[count]!='\0')
    {
        f[flen]=s[count];
        count++;
        flen++;
    }
    f[flen]='\0';
    
    printf("after concatination %s",f);
    return 0;
}
