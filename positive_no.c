// wap to check no is positive or nigative 
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if(num>0){ 
    printf("\nnumber is positive");
    
    } 
    if(num==0){
    printf("\nnumber is nutral");
   
    }
    else
    printf("\nnumber is negative");


    return 0;
}
