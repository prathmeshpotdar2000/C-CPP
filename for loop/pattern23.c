
//  0        
//  0 1
//  0 1 0
//  0 1 0 1
//  0 1 0 1 0

#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
           if (j<=i)
           {
            if(j%2==1)
                printf(" 0"); 
                else
                {
                    printf(" 1");
                }
                
            }
           else
           {
            printf("  ");
           }
           
        
           
        }
        printf("\n");
    }
}