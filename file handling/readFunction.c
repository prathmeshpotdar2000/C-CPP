#include<stdio.h>

struct employee
{
    int id,sal;
    char name[90];

};
 struct employee e[3];
 int main(int argc, char const *argv[])
 {
    FILE *fptr;
    fptr=fopen("C:\\Users\\admin\\OneDrive\\Desktop\\C programming\\file handling\\test.txt","r");
    fread(&e,sizeof e,3,fptr);
    for (int i = 0; i < 3; i++)
    {
        printf("\n name=%s id=%d sal=%d",e[i].name,e[i].id,e[i].sal);
    }
    
    
    fclose(fptr);
    return 0;
 }
 