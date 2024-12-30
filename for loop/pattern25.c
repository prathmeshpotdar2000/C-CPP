
//          5
//        4 5
//      3 4 5
//    2 3 4 5
//  1 2 3 4 5


#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
           if (j>=6-i)
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
}