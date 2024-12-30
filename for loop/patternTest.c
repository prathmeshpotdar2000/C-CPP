#include<stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 5; i++)
    {
        int k=i;
        for (int j = 1; j <= 10;j++)
        {
            
            if (j>=7-i&&j<=5+i)
            {
                printf("%d",k);
             if (j<6)
            {
                k++;
            }
            else
            // if(j>5)
            {
                k--;
            }
            }
            else
            {
                printf(" ");
            }
           
           
        }
        printf("\n");
    }
    
    return 0;
}
