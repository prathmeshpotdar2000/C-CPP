#include <stdio.h>
int main(int argc, char const *argv[])
{
    int getmax(int a[]); // declaration 1000
    int a[] = {10, 20, 30, 40, 50};
    // int result;
    //   result=;
     printf("\n max =%d", getmax(a));
    // return 0;
}
//10    20    30    40    50
//1000 1004  1008  1012  1016
int getmax(int b[])//1000
{
    int max;
    max = b[0];//1000
    for (int i = 0; i < 5; i++)
    {
        if (max < b[i])//1000+1*4;
        {
            max = b[i];
        }
    }
    //  printf("\nmax is %d",max);
    //  return max;//getmin
}