#include<stdio.h>
//      1     
//     1 2    
//    1   3
//   1     4
//  1       5
// 1 2 3 4 5 6
int main(int argc, char const *argv[])
{
    int flag=0;
    for (int i = 1; i <= 6; i++)
    {int k=0;
        for (int j = 1; j <= 11;j++)
        {
            if ((i==6||j==7-i||j>6)&&flag)
            {
                k++;
            }
            
            
            if ((i==6||j==7-i||j==5+i)&&flag)
            {
                printf("%d",k);
                 
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
