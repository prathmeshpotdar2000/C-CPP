//          A        
//        A B C
//      A B C D E
//    A B C D E F G
//  A B C D E F G H I

#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    for (int i = 1; i <= 5; i++)
    { char ch=65;
        for (int j = 1; j <= 9; j++)
        {
           if (j>=6-i&&j<=4+i)
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