#include<stdio.h>

int main(int argc, char const *argv[])
{
    int k,flag;
    for (int i = 1; i <= 5; i++)
    { k=1;
      for (int j = 0; j <=9; j++)
      {
       if (j>=6-i&&j<=4+i&&flag==1)
       {
         printf("%d",k);
         k++;
         flag=0;
       }
       else
       {
        printf(" ");
        flag=1;
       }
       
      }
      printf("\n");
    }
    
    
    return 0;
}
