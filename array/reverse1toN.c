#include <stdio.h>

int main(int argc, char const *argv[])
{

    int num;
    printf("enter array size: ");
    scanf("%d", &num);
    int a[num];

    // int len = (sizeof(a)/sizeof(a[0]));//20/4=5
    int len = num;
    printf("enter values in array (according to above size): ");
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &a[i]);
    }

    int mid = len / 2;
    int end = len - 1;
    for (int start = 0; start < mid; start++)
    {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        end--;
    }
    end = len - 1;
    printf("values after reverse: ");

    for (int i = 0; i <= end; i++)
    {
        printf("\t%d", a[i]);
    }

    return 0;
}
