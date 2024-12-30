//WAP to input any character and check whether it is alphabet,digit,special character
#include<STDIO.H>
#include<ctype.h>

int main(int argc, char const *argv[])
{
    char alphabet;
    int digit;
    char spl;

    printf("enter any character");
    scanf("%c%d%c",&alphabet,&digit,&spl);

    if ((alphabet >= 'a' && alphabet <= 'z') || (alphabet >= 'A' && alphabet <= 'z'))
    {
      printf("it is an alphabet");
    }
    
    if (digit> 0 && digit< 9 || digit> 48 && digit< 57 )
    {
       printf("character is digit");

    }
    /*if (spl > 32 && spl < 47 || spl > 58 && spl < 64 || 
        spl > 91 && spl < 96 || spl > 123 && spl < 126)*/
            // Check if the character is a special character
    if (!isalnum(spl)) 

    {
        printf(" character is special character ");
    }
    

    return 0;
}
