

#include<stdio.h>
#include<string.h>

void acceptString(char *ptr)
{
   ptr=ptr+4;
}

int main(int argc, char const *argv[])
{
    char ch[]={"good morning india"};
    char *p;
    p=ch;
    acceptString(ch);
    printf(" %s",p);
    
    
    return 0;
}
