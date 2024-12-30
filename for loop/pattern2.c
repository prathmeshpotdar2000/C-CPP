/*

*   *
*  * 
* *  
**   
*****

  */
#include<stdio.h>
#include<windows.h>

int main(int argc, char const *argv[])
{
    
    int i,j;
    for ( i = 1; i <= 5; i++)
    {
       for ( j = 1; j <= 5; j++)
       {
        if (j==1||i==5||i==6-j)
        {
           printf("*");
        }
        else
        {
            printf(" ");
        }
        
       }
       printf("\n");
        Sleep(1000);
    }
   
    return 0;
}
