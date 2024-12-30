#include<stdio.h>

int main(int argc, char const *argv[])
{
    FILE *ptr=NULL;
    ptr=fopen("test.txt","r+");
    char a[45];

    // fputc('a',ptr);

    fputs("prathmesh here is the ",ptr);

    fgets(a,45,ptr);
    printf("\n character is: %s",a);

    fclose(ptr);
    return 0;
}
