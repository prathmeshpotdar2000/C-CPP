/*

 * * * * *
 *       *
 * * * * *
 
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
           if (j==1||j==5 || i==1 || i==3)
           {
            printf(" *");
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
