#include<stdio.h>
#include<conio.h>

int main(int argc, char const *argv[])
{
    char month,jan,feb,mar,apr;
    
    printf("enter month: ");
    scanf("%d",&month);

    switch (month)
    {
    case 1:
           switch (month==jan)
           {
            case 1:
           printf("31 days");
            break;
           
           default:
            break;
           }
        break;
    
    default:
        break;
    }

    return 0;
}
