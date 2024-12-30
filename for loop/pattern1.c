/*
*****
*   *
*   *
*   *
*****
*/
#include<stdio.h>
#include<windows.h>

int main(int argc, char const *argv[])
{
    
    for (int i = 1; i <=5; i++)
    {
       for (int j = 1; j <= 5; j++)
       {
        if (j==1||j==5||i==1||i==5)
        {
           printf("*");
        }
        else{
            printf(" ");
        }

       }
       printf("\n");
       Sleep(1500);
    }
    
    return 0;
}
