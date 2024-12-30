#include<stdio.h>

int main()
{
    int x,y,sum;
    printf("enter input");
    scanf("%d%d",&x,&y);
    sum=x+y;
    (x==y)?printf("%d",sum*3):printf("%d",sum);
    return 0;
}
