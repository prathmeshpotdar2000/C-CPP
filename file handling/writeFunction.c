#include<stdio.h>

struct employee
{
    int id,sal;
    char name[90];
};
struct employee e;
int main(int argc, char const *argv[])
{
    FILE *fptr;
    fptr=fopen("C:\\Users\\admin\\OneDrive\\Desktop\\C programming\\file handling\\test.txt","a");
    printf("\nenter name id and salary of employee: ");
    scanf("%s %d %d",&e.name,&e.id,&e.sal);
    fwrite(&e,sizeof(e),1,fptr);
    fclose(fptr);
    printf("\n employee data saved succesfully...");
    return 0;
}
