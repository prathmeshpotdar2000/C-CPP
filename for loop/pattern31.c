//  A A A A A
//  B B B B
//  C C C
//  D D
//  E

#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    for (int i = 1; i <= 5; i++)
    { char ch=64;
        for (int j = 1; j <= 5; j++)
        {
           if (j<=6-i)
           {
                printf(" %c",ch+i); 

                
            }
           else
           {
            printf("  ");
           }
           
        
           
        }
        printf("\n");
    }
}