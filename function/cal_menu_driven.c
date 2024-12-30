#include<stdio.h>
void add();
void sub();
void mul();
void div();
void mod();
int main(int argc, char const *argv[])
{   
    int choice;
    printf("choose one: \n 1 for addition \n 2 for subtraction \n 3 for multiplication \n 4 for division \n 5 for modulo");
    printf("\nenter choice: ");
    scanf("%d",&choice);
    
    switch (choice)
    {
    case 1: add();
            break;
    case 2: sub();
            break; 
    case 3: mul();
            break;
    case 4: div();
            break;
    case 5: mod();
            break;            

    
    default:printf("\ninvalid choice");
        break;
    } 
    return 0;
}
void add()
{
    int a,b,c;
    printf("\nenter two values for addition : ");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("addion is=%d",c);
}
void sub()
{
    int a,b,c;
    printf("\nenter two values for subtraction: ");
    scanf("%d%d",&a,&b);
    c=a-b;
    printf("subtraction is=%d",c);
}
void mul()
{
    int a,b,c;
    printf("\nenter two values for multiplication: ");
    scanf("%d%d",&a,&b);
    c=a*b;
    printf("multiplication is=%d",c);
}
void div()
{
    int a,b,c;
    printf("\nenter two values for division: ");
    scanf("%d%d",&a,&b);
    c=a/b;
    printf("division is=%d",c);
}
void mod()
{
    int a,b,c;
    printf("\nenter two values for modulo: ");
    scanf("%d%d",&a,&b);
    c=a%b;
    printf("modulo is=%d",c);
}


