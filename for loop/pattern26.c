//  A A A A A
//    B B B B
//      C C C
//        D D
//          E

#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    for (int i = 1; i <= 5; i++)
    {char ch=64+i;
        for (int j = 1; j <= 5; j++)
        {
           if (j>=i)
           {
                printf(" %c",ch); 
                
            }
           else
           {
            printf("  ");
           }
           
        
           
        }
        printf("\n");
    }
}