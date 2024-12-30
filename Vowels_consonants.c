//WAP to input any alphabet and check whether  it is vowel or consonant
#include<stdio.h>
//#include<conio.h>

int main(int argc, char const *argv[])
{
    char ch;
   
    printf("inpute charecter:\n");
    scanf("%c",&ch);
    
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'z'))
    {
    
    if(ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u' || 
       ch == 'A'||ch == 'E'||ch == 'I'||ch == 'O'||ch == 'U')
    {        
            printf("%c is a vowel.\n", ch);


    }
    
    else
    {
            printf("%c is a consonant.\n", ch);

    }
    }
    return 0;
}
