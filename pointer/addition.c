#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, *ptr1, *ptr2, sum;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);

    ptr1 = &a;
    ptr2 = &b;
    sum = *ptr1 + *ptr2;

    printf("%d", sum);
    return 0;
}
