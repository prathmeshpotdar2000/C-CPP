// i/p=1 2 5 7 9
// o/p= 3 4 6 8 m=missing elements
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[5],m;
    printf("enter five values");
    for (int i = 0; i < 5; i++)
    {
       scanf("%d",&a[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (a[i]>a[j])
            {
               int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }
        
    }
    for (int i = 0; i < 4; i++)
    {
        m=a[i]+1;
        while (a[i+1]>m)
        {
            printf(" %d",m);
            m++;
        }
        
    }
    
    
    return 0;
}
