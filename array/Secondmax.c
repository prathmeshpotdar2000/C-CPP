#include <stdio.h>
int main()
{
    int i, j;
    int a[5];
    printf("\n Please enter the elements of array : ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    int largest = a[0];
    int slargest = a[0];

    for (int i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (a[i] < a[j])
            {
                largest = a[j];
                slargest = a[i];
            }
        }
    }
    if (largest == slargest)
    {
        printf("\nthere is no second largest in array");
    }
    else
    {
        printf("\n Largest is :%d", largest);
        printf("\n sLargest is :%d", slargest);
        
    }
    
}