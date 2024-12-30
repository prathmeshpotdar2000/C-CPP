#include<stdio.h>
/*
     *     
    * *
   *   *   
  *     *
 *       *
* * * * * *

*/
int main(int argc, char const *argv[])
{
    int flag=0;
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 11;j++)
        {
            if ((i==6||j==7-i||j==5+i)&&flag)
            {
                printf("*");
                flag=0;
            }
            else
            {
                printf(" ");
                flag=1;
            }
            
        }
        printf("\n");
    }
    
    return 0;
}
