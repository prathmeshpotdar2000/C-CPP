#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[5], count = 0;
    printf("enter five values in array: ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nprime numbers are: ");
    for (int i = 0; i < 5; i++)
    {  count=0;
        for (int j = 1; j <= a[i]; j++)
        {

            if (a[i] % j == 0)
            {
                count++;
            }
        }
        
         if (count == 2)
            {
                
              printf(" %d", a[i]);
                
            }
    }

    return 0;
}
