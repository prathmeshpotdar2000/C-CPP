
//          *        
//        *   *
//      *   *   *
//    *   *   *   *
//  *   *   *   *   *
#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    for (int i = 1; i <= 5; i++)
    { int flag;
        for (int j = 1; j <= 9; j++)
        {
           if (j>=6-i && j<=4+i && flag==1)
           {
            
            printf(" *");
            flag=0;
           }
           else
           {
            printf("  ");
            flag=1;
           }
           
        }
        printf("\n");
    }
    
    return 0;
}
