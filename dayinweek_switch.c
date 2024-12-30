#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("enter no of day(1-7): ");
    scanf(" %d",&num);
    switch (num)
    {
    case 1:
        printf("monday");
        break;
    
     case 2:
        printf("tuesday");
        break;
    
     case 3:
        printf("wednesday");
        break;
    
     case 4:
        printf("thursday");
        break;
    
     case 5:
        printf("friday");
        break;
    
     case 6:
        printf("saturday");
        break;
    
     case 7:
        printf("sunday");
        break;
    
    default:
        printf("invalid number of day in week");
        break;
    }
    
    return 0;
}
