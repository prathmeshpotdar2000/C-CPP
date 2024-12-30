#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int *ptr, size, max, min;
    printf("Enter size for array: ");
    scanf("%d", &size);

    ptr = (int *)malloc(sizeof(int) * size);
    printf("\nEnter values in an array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &ptr[i]);
    }
    max = ptr[0];
    for (int i = 0; i < size; i++)
    {
        if (ptr[i] > max)
        {
            max = ptr[i];
        }
    }
    min = ptr[0];
    for (int i = 0; i < size; i++)
    {
        if (ptr[i] < min)
        {
            min = ptr[i];
        }
    }

    printf("maximum element is: %d ", max);
    printf("minimum element is: %d ", min);
    return 0;
}
