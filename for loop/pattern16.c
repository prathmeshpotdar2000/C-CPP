//          1        
//        1 2 1      
//      1 2 3 2 1
//    1 2 3 4 3 2 1
//  1 2 3 4 5 4 3 2 1


#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    for (int i = 1; i <= 5; i++)
    { int k=1;
        for (int j = 1; j <= 9; j++)
        {
           if (j>=6-i && j<=4+i)
           {
            
            printf(" %d",k);
            if(j<5){
              k++;
            }
           else{
            k--;
           }
           }
           else
           {
            printf("  ");
           }
           
        }
        printf("\n");
    }
    
    return 0;
}
