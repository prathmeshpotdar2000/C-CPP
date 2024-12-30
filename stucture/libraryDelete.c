#include <stdio.h>
#include<string.h>

struct library
{
    int id, price;
    char bookname[10], authname[10];
};

int main(int argc, char const *argv[])
{
    struct library lib[5];
    int sid,flag=0;
    char sname[10],update[10];

    for (int i = 0; i < 2; i++)
    {
        printf("enter id,bookname,authername,price: ");
        scanf("%d", &lib[i].id);
        // fflush(stdin);
        scanf("%s", lib[i].bookname);
        // fflush(stdin);
        scanf("%s", lib[i].authname);
        //    fflush(stdin);
        scanf("%d", &lib[i].price);
        // fflush(stdin);
    }

    for (int i = 0; i < 2; i++)
    {
        printf("\nid=%d bookname=%s authername=%s price=%d: ", lib[i].id, lib[i].bookname, lib[i].authname, lib[i].price);
    }
    printf("\n\n enter search bookname: ");
    scanf("%s", &sname);
    printf("enter name for update: ");
    scanf("%s", &update);
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(lib[i].bookname,sname)==0)
            {
               strcpy(lib[i].bookname,update);
               flag=1;
            }
        printf("\nid=%d bookname=%s authername=%s price=%d: ", lib[i].id, lib[i].bookname, lib[i].authname, lib[i].price);
    }
     if (flag==0)
     {
        printf("\nname not found");
     }
    return 0;
}
