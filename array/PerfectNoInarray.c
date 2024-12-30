#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[5], sum=0;
    printf("enter five values in array: ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nperfect numbers are: ");
    for (int i = 0; i < 5; i++)
    {  
       sum=0;
        for (int j = 1; j < a[i]; j++)
        {

            if (a[i] % j == 0)
            {
                sum=sum+j;
            }
        }
        
         if (sum == a[i])
            {
                
              printf(" %d", a[i]);
                
            }
    }

    return 0;
}
