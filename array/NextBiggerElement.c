#include <stdio.h>
int main(int argc, char const *argv[])
{
    int len, next;
    printf("enter len of an array: ");
    scanf("%d", &len);
    printf("enter %d values in array: ", len);
    int a[len];
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < len; i++)
    {
        next = -1;
        // printf("\nNext bigger element of %d in the array is: ",a[i]);
        for (int j = i + 1; j < len; j++)
        {
            if (a[i] < a[j])
            {
                next = a[j];
                break;
            }
        }
        printf("Next bigger element of %d in the array is: %d\n", a[i], next);
    }

    return 0;
}
