//  * A * B *
//  C * D * E
//  * F * G *
//  H * I * J
//  * K * L *

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int flag;
    char ch=65;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
           if (flag==1)
           {
                printf(" %c",ch);
                ch++; 
                flag=0;
            }
           else
           {
            printf(" *");
            flag=1;
           }
           
        
           
        }
        printf("\n");
    }
}