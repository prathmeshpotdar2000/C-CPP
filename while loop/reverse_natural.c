#include<stdio.h>
int main(int argc, char const *argv[])
{

    int n;
    printf("print no: ");
    scanf("%d",&n);//5

    while (n>=1)
    {
        
        printf("\t%d",n);
        n--;
    }
    

    return 0;
}
