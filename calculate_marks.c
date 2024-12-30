#include<stdio.h>

int main(int argc, char const *argv[])
{
    int physics,chemistry,biology,mathematics,computer,percentage;
    printf("enter marks:");
    scanf("%d%d%d%d%d",&physics,&chemistry,&biology,&mathematics,&computer);
    percentage=(physics+chemistry+biology+mathematics+computer)/5;

    if (percentage>=90 && percentage<=100)
    {
        printf("Grade A");
    }
    if (percentage>=80 && percentage<=90)
    {
        printf("Grade B");
    }
    if (percentage>=70 && percentage<=80)
    {
        printf("Grade C");
    }
    if (percentage>=60 && percentage<=70)
    {
        printf("Grade D");
    }
    if (percentage>=40 && percentage<=60)
    {
        printf("Grade E");
    }
    if (percentage<=40)
    {
        printf("Grade F");
    }

    return 0;
}
