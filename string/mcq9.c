#include<stdio.h>
#include<conio.h>
void main() 
{   static char str[10] = {0,0,0,0,0,0,0,0,0,0}; 
    char *s; 
      int i; 
     s = str; 
    for (i = 0 ; i <= 9 ; i++)  { 
       if(*s ) 
          printf ("%c",*s); 
      s++; 
    }
   getch();
}
