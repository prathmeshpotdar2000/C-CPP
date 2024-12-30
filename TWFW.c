#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int V,W;
    printf("enter value of vehical and wheels: ");
    scanf("%d%d",&V,&W);
     if (W % 2 != 0 || V >= W || W < 2) {
        printf("INVALID INPUT\n");
       
    }
    else{
    int FW = (4 * V - W) / 2;
    int TW = V - FW;
    
    printf("TW = %d \nFW = %d\n", TW, FW);

    }
  


    return 0;
}
