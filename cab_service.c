#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x,y;
    printf("enter two rates");
    scanf("%d%d",&x,&y);
    if (x<y)
    {
      printf("first");
    }
    else if(x>y)
    {
        printf("second");
    }
    else 
    {
        printf("any");
        /* code */
    }
    
    return 0;
}
