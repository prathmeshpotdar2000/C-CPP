#include <stdio.h>
#include <conio.h>
#include <string.h>
struct emp
{
    int id;
    char name[20];
    long int sal;
}  temp;
int count = 0;
void add(struct emp[]);
void show();
void searchEmployee(struct emp[], int id);
void searchEmployeeByName(struct emp[]);
void deleteEmployee(struct emp[]);
void deleteEmployeeByName(struct emp []);
void updateEmployee(struct emp []);
void updateEmployeeByName(struct emp[]);
void countOfEmployee(struct emp[]);
void assendingBySalary(struct emp[]);
void highestSalary(struct emp[]);
void salaryAmoung1000To6000(struct emp[]);
struct emp e[4];
int main()
{
    int i, index, k, usal, id, choice,expression=0;
    char uname[10];
    // struct emp ;
    do
    {
        printf("\nenter 1 for add employee details");
        printf("\nenter 2 for display all employee details");
        printf("\nenter 3 for search employee details");
        printf("\nenter 4 for delete employee details");
        printf("\nenter 5 for update employee details");
        printf("\nenter 6 for display count of employee");
        printf("\nenter 7 for display employee details in assending order");
        printf("\nenter 8 for display employee details of highest salary");
        printf("\nenter 9 for display employee details between 1000 to 6000 salary");

        printf("\nenter 0 for stop: ");
        printf("\nenter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            add(e);
            break;

        case 2:
            show(e);
            break;
        case 3:do
        {    expression;
            printf("\n1.for search by id \n2.for search by name");
            printf("\nenter choice: ");
            scanf("%d",&expression);
            switch (expression)
            {
            case 1:
                searchEmployee(e, id);
                break;
            case 2:
                searchEmployeeByName(e);
                break;
            case 0:
                expression=0;
                break;
            default:printf("\ninvalid choice");
                break;
            }
           
        } while (expression!=0);
        printf("thanksss...");
            break;
        case 4:do
        {    expression;
            printf("\n1.for delete by id \n2.for delete by name \n0.for exit");
            printf("\nenter choice: ");
            scanf("%d",&expression);
            switch (expression)
            {
            case 1:
                deleteEmployee(e);
                break;
            case 2:
                deleteEmployeeByName(e);
                break;
            case 0:
                expression=0;
                break;
            default:printf("\ninvalid choice");
                break;
            }
           
        } while (expression!=0);
        printf("thanksss...");
            break;
        case 5:do
        {    expression;
            printf("\n1.for update employee id \n2.for update employee name \n0.for exit");
            printf("\nenter choice: ");
            scanf("%d",&expression);
            switch (expression)
            {
            case 1:
                updateEmployee(e);
                break;
            case 2:
                updateEmployeeByName(e);
                break;
            case 0:
                expression=0;
                break;
            default:printf("\ninvalid choice");
                break;
            }
           
        } while (expression!=0);
        printf("thanksss...");
            break;
        case 6:
            countOfEmployee(e);
            break;
        case 7:
            assendingBySalary(e);
            break;
        case 8:
            highestSalary(e);
            break;
        case 9:
            salaryAmoung1000To6000(e);    
            break;
        case 0:
            choice=0;
            break;
        default:
            printf("\n invalid choice\n");
            break;

        }

    } while (choice != 0);
    printf("\n Thank youuu...!!!");
    return 0;
}
void add(struct emp a[])
{
    if (count == 3)
    {
        printf("full...you cant add more...\n");
    }
    else
        printf("\n Enter Id, Name and Sal of employee: ");
    scanf("%d%s%ld", &a[count].id, &a[count].name, &a[count].sal);
    count++;
}
void show()
{
    if (count==0)
    {
       printf("\nplz...add details first...\n");
    }
    else
    printf("\t Id     \t  Name       \t Sal");
    for (int i = 0; i < count; i++)
    {
        printf("\n\t%d      \t %s          \t %ld", e[i].id, e[i].name, e[i].sal);
    }
}
void searchEmployee(struct emp c[], int d)
{
    int uid;
    printf("enter employee id for search");
    scanf("%d", &d);

    printf("\t Id     \t  Name       \t Sal");
    for (int i = 0; i < count; i++)
    {
        if (d == e[i].id)
        {
            printf("\n\t%d      \t %s          \t %ld", c[i].id, c[i].name, c[i].sal);
        }
    }
}
void searchEmployeeByName(struct emp c[])
{
    char sname[10],uname[10];
    printf("enter employee name for search");
    scanf("%s",&sname);

    printf("\t Id     \t  Name       \t Sal");
    for (int i = 0; i < count; i++)
    {
        if (strcmp(e[i].name,sname)==0)
        {
            // strcpy(e[i].name,uname);
            printf("\n\t%d      \t %s          \t %ld", c[i].id, c[i].name, c[i].sal);
        }
    }
}
void deleteEmployee(struct emp d[])
{
    int sid, count1 = 0;
    printf("\n enter id to be deleted: ");
    scanf("%d", &sid);
    for (int i = 0; i < count; i++)
    {
        if (sid == e[i].id)
        {
            for (int j = i; j < count - count1; j++)
            {
                e[j] = e[j + 1];
            }
            count1++;
            count--;
        }
    }
    if (count1 == 0)
        printf("\n Not found so not deleted");
    // printf("\n\t Id     \t  Name       \t Sal");
    // for (int i = 0; i < count - count1; i++)
    // {
    //     printf("\n\t%d      \t %s          \t %ld", d[i].id, d[i].name, d[i].sal);
    // }
    show(e);
}
void deleteEmployeeByName(struct emp d[])
{
     int count1 = 0;
     char sname[10];
    printf("\n enter name to be deleted: ");
    scanf("%s", &sname);
    for (int i = 0; i < count; i++)
    {
        if (strcmp(sname,e[i].name)==0)
        {
            for (int j = i; j < count - count1; j++)
            {
                e[j] = e[j + 1];
            }
            count1++;
            count--;
        }
    }
    if (count1 == 0)
        printf("\n Not found so not deleted");
    // printf("\n\t Id     \t  Name       \t Sal");
    // for (int i = 0; i < (count - count1); i++)
    // {
    //     printf("\n\t%d      \t %s          \t %ld", d[i].id, d[i].name, d[i].sal);
    // }
    show(e);
}
void updateEmployee(struct emp c[])
{
    int sid,uid;
    printf("enter search id of employee to be update: ");
    scanf("%d", &sid);
    printf("enter new id for update: ");
    scanf("%d", &uid);

    printf("\t Id     \t  Name       \t Sal");
    for (int i = 0; i < count; i++)
    {
        if (e[i].id==sid)
        {
            (e[i].id=uid);
        }
        printf("\n\t%d      \t %s          \t %ld", c[i].id, c[i].name, c[i].sal);
    }
}
void updateEmployeeByName(struct emp c[])
{
    char uname[10], name[10];
    printf("enter employee name to be update: ");
    scanf("%s", &name);
    printf("enter new name for update: ");
    scanf("%s", &uname);

    printf("\t Id     \t  Name       \t Sal");
    for (int i = 0; i < count; i++)
    {
        if (strcmp(e[i].name, name) == 0)
        {
            strcpy(e[i].name, uname);
        }
        printf("\n\t%d      \t %s          \t %ld", c[i].id, c[i].name, c[i].sal);
    }
}
void countOfEmployee(struct emp a[])
{
    printf("\n count of employee is: %d\n", count);
}
void assendingBySalary(struct emp c[])
{

    for (int i = 0; i < count; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (e[i].sal > e[j].sal)
            {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }
    printf("\n assending record by salary:");
    printf("\t Id     \t  Name       \t Sal");
    for (int i = 0; i < count; i++)
    {
        printf("\n\t%d      \t %s          \t %ld", c[i].id, c[i].name, c[i].sal);
    }
}
void highestSalary(struct emp c[])
{
    int max=e[0].sal,temp1;
    for (int i = 0; i < count; i++)
    {
        if (e[i].sal > max)
            {
                max=e[i].sal;
                temp1 = i;
                
            }
    }
    printf("\t Id     \t  Name       \t Sal");
   
        printf("\n\t%d      \t %s          \t %ld", c[temp1].id, c[temp1].name, c[temp1].sal);
    
}
void salaryAmoung1000To6000(struct emp c[])
{
    printf("\n before: ");
    show(e);
    printf("\n after");
    printf("\t Id     \t  Name       \t Sal");
    for (int i = 0; i < count; i++)
    {
        if (e[i].sal >=1000&&e[i].sal<=6000 )
            {
               printf("\n\t %d      \t %s          \t %ld", c[i].id, c[i].name, c[i].sal);
            }
    }
}