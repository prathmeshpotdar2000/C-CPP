//          1
//        * *
//      3 2 1
//    * * * *
//  5 4 3 2 1

#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    for (int i = 1; i <= 5; i++)
    { int k=5;
        for (int j = 1; j <= 5; j++)
        {
           if (j>=6-i)
           { 
             if(i%2==1)
              {
                printf(" %d",k); 
                k--;
              }
             else{
                printf(" *");
               
             }
                
        
                
            }
           else
           {
            printf("  ");
            k--;
           }
           
        
           
        }
        printf("\n");
    }
}