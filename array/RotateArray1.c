
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[5],n,i;
    printf("enter elements in array a: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);    
    }
    printf("enter position of rotating: ");
    scanf("%d",&n);
    int len=sizeof(a)/sizeof(a[0]);
    i=0;
    while (i<n)
    {
        int temp=a[0];
        for (int j = 0; j < len; j++)
        {
            a[j]=a[j+1];
        }
        a[len-1]= temp;

        i++;
    } 
    printf("\nAfter rotating from %dth position the array is: ",n);
    for (int i = 0; i < len; i++)
    {
       printf(" %d",a[i]);
    } 
    return 0;
}
