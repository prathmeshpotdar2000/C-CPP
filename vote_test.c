#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("enter age");
    scanf("%d",&a);
    (a>21)?printf("Congratulation! you are eligible for casting your vote"):printf("you are not eligible");
    return 0;
}
