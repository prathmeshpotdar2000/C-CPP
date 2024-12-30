#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[3][3],sum=0;

    printf("enter 9 elements in array a: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
          scanf("%d",&a[i][j]);

        }
        
    }
  
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
       printf("%d",a[i][j]);
       if (i%2==0&&j%2==0)
       {
         sum=sum+a[i][j];
       }
       
    }
    
  }
  printf("\nsum=%d",sum);
}

