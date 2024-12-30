#include <stdio.h>
/*
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/ 
int main(int argc, char const *argv[])
{ int k = 0;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if (j > 6 - (k + 1) && j < (6 + k))
            {
                printf(" ");
            }
            else 
            {
                printf("*");
            } 
        }
         if ( i< 5)
            {
                k++;
            }
            else if(i>5)
            {
                k--;
            }
        printf("\n");
    }

    return 0;
}