
//  1        
//  1 2
//  1   3
//  1     4
//  1 2 3 4 5
#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
           if (i==5 || j==1 || i==j)
           {
            
            printf(" %d",j);
           }
           else
           {
            printf("  ");
           }
           
        }
        printf("\n");
    }
    
    return 0;
}
