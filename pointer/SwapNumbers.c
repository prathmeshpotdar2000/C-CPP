#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, *ptr1, *ptr2;
    printf("enter value of a: ");
    scanf("%d", &a);
    printf("enter value of b: ");
    scanf("%d", &b);

    ptr1 = &a; //2
    ptr2 = &b; //3
    
    *ptr1= *ptr1+*ptr2;
    *ptr2= *ptr1-*ptr2;
    *ptr1=*ptr1-*ptr2;
    

    printf("value of a:%d", a);
    printf("\nvalue of b:%d", b);
    return 0;
}
