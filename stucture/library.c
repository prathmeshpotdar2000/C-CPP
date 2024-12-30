#include <stdio.h>

struct library
{
    int id, price;
    char bookname[10], authname[10];
};

int main(int argc, char const *argv[])
{
    struct library lib[5];
    int sid, update,flag=0;

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

    printf("\n\n enter search id: ");
    scanf("%d", &sid);
    printf("enter value for update: ");
    scanf("%d", &update);
    for (int i = 0; i < 2; i++)
    {
        for (int j = i+1; j < 2; j++)
        {
            if (lib[i].id == lib[j].id)
            {
                flag=1;
                break;
            }
        }
        if (lib[i].id == sid)
            {
                lib[i].id = update;
            }
        printf("\nid=%d bookname=%s authername=%s price=%d: ", lib[i].id, lib[i].bookname, lib[i].authname, lib[i].price);
    }
     if (flag==1)
     {
        printf("\nthere are multiple same id's");
     }
     
    return 0;
}
