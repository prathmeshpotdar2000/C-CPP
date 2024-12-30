#include <stdio.h>
#include <conio.h>
#include <string.h>
struct emp
{
  int id;
  char name[20];
  long int sal;
};
main()
{
  int i, index, k, usal, uid;
  char uname[10];
  struct emp e[4];
  for (i = 0; i < 3; i++)
  {
    printf("\n Enter Id, Name and Sal of %d employee", i);
    scanf("%d%s%ld", &e[i].id, &e[i].name, &e[i].sal);
  }
  printf("\t Id     \t  Name       \t Sal");
  for (i = 0; i < 3; i++)
  {
    printf("\n\t%d      \t %s          \t %ld", e[i].id, e[i].name, e[i].sal);
  }
  fflush(0);
  printf("\n Enter id, name and slaary to be inserted");
  scanf("%d", &uid);
  fflush(stdin);
  gets(uname);
  fflush(stdin);
  scanf("%d", &usal);
  printf("\n Enter index where you want to insert record");
  scanf("%d", &index);
  for (i = 3; i > index; i--)
  {
    e[i] = e[i - 1];
  }
  e[index].id = uid;
  e[index].sal = usal;
  strcpy(e[index].name, uname);
  printf("\n\t Id     \t  Name       \t Sal");
  for (i = 0; i < 4; i++)
  {
    printf("\n\t%d      \t %s          \t %ld", e[i].id, e[i].name, e[i].sal);
  }
  getch();
}