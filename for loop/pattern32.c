
//  5 4 3 2 1
//  4 3 2 1
//  3 2 1
//  2 1
//  1
#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    for (int i = 1; i <= 5; i++)
    { int k=6-i,m=6-i;
        for (int j = 1; j <= 5; j++)
        {
           if(j<=m)
           {
            printf(" %d",k);
            k--;
           }
           else
           {
            printf(" ");
           }
           
        }
        printf("\n");
    }
    
    return 0;
}
