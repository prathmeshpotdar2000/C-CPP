#include <stdio.h>
int count = 0;
void main()
{
    int getResult(int);
    int k = 35;
    int result = getResult(k);
    printf("\nResult is %d", result);
}
int getResult(int x)
{
    if (count < 3)
    {
        return getResult(++x);
        count++;
    }
}