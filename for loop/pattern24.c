//  A        
//  A B
//  A B C
//  A B C D
//  A B C D E

#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    for (int i = 1; i <= 5; i++)
    { char ch=65;
        for (int j = 1; j <= 5; j++)
        {
           if (j<=i)
           {
            
                printf(" %c",ch); 
               ch++;
                
            }
           else
           {
            printf("  ");
           }
           
        
           
        }
        printf("\n");
    }
}