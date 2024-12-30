
// 10101
// 01010
// 10101
// 01010
// 10101
#include<stdio.h>

int main(int argc, char const *argv[])
{int flag=1;
    
    for (int i = 1; i <= 5; i++)
    {
        
        for (int j = 0; j < 5; j++)
        {
           // printf("%d",(i+j)%2);
           if(flag==1)
           {
            printf("%d",flag);
            flag=0;
           }
          else{
            printf("%d",flag);
            flag=1;
          }
           
        }
        printf("\n");
        flag!=flag;
    }
    
    return 0;
}
