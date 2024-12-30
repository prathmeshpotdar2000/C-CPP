/*  1 * * * *
//  2 2 * * *
//  3 3 3 * *
//  4 4 4 4 *
//  5 5 5 5 5
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    for (int i = 1; i <= 5; i++)
    {;
        for (int j = 1; j <= 5; j++)
        {
           if (j<=i)
           {
                printf(" %d",i); 
                
            }
           else
           {
            printf(" *");
           }
           
        
           
        }
        printf("\n");
    }
}