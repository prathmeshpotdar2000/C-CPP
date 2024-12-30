#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, *ptr;
    printf("enter number: ");
    scanf("%d", &a);
    

    ptr = &a; 

   for (int i = *ptr-1; i >= 1; i--)
   {
    *ptr=(*ptr)*i;
   }

    printf("Factorial is:%d", a);
    return 0;
}
