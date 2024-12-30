
//   A  B  C  D  E
//   B  C  D  E  F
//   C  D  E  F  G
//   D  E  F  G  H
//   E  F  G  H  I
#include<stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 5; i++)
    { char ch=64;
    
        for (int j = 1; j <= 5; j++)
        {
           
           
           {
            printf("  %c",ch+i);
            ch++;
            
           }
          
           
        }
        printf("\n");
      
    }
    
    return 0;
}
