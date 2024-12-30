//          1        
//        1   2       
//      1       3
//    1           4 
//  1   2   3   4   5 


#include<stdio.h>

int main(int argc, char const *argv[])
{
   
    for (int i = 1; i <= 5; i++)
    { int k=1,flag;
        for (int j = 1; j <= 9; j++)
        { 
           if (j>=6-i && j<=4+i && flag==1)
           {if(i==5||j<=6-i || j>=4+i)
           
            printf(" %d",k);
        
            k++;
            flag=0;
           }
           else
           {
            printf("  ");
            flag=1;
           }
           
        }
        printf("\n");
    }
    
    return 0;
}
