
//   5  4  3  2  1
//   5  4  3  2  1
//   5  4  3  2  1
//   5  4  3  2  1
//   5  4  3  2  1
#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    for (int i = 1; i <= 5; i++)
    { int k=5;
        for (int j = 1; j <= 5; j++)
        {
           
           
           {
            printf("  %d",k);
            k--;
           }
          
           
        }
        printf("\n");
    }
    
    return 0;
}
