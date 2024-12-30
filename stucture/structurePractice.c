#include<stdio.h>
#include<conio.h>

struct empolyee 
{
     int id;
    char name[10];
    int salary;
}e[4];
void setEmployee()
{
    // int id,salary;
    // char name[10];
    for (int i = 0; i < 4; i++)
    {
        printf("Enter id name and salary:");
        scanf("%d",&e[i].id);
        // fflush(0);
        scanf("%s",&e[i].name);
        // fflush(0);
        scanf("%d",&e[i].salary);
    }
    
}
void show()
{
    for (int i = 0; i < 4; i++)
    {
        printf("\n%d\t%s\t%d",e[i].id,e[i].name,e[i].salary);
    }
    
}
int main(int argc, char const *argv[])
{
    setEmployee();
    show();
    return 0;
}
