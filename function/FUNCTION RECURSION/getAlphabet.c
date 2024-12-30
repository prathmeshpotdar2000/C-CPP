#include <stdio.h>
char ch;
int main(int argc, char const *argv[])
{
    char getAlphabet(char); // declaration
    ch = 'a';
    printf("the natural numbers are: ");
     getAlphabet(ch);
    return 0;
}
char getAlphabet(char n)
{
    if (ch <= 'z')
    {
        
        printf(" %c",ch);
        ch++;
        return getAlphabet(n);
    }
    
}