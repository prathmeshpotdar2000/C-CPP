#include<stdio.h>
#include<conio.h>
void main() 
{   static char str[ ] = "Limericks"; 
     char*s; 
     s = &str[6] - 6 ; 
     while(*s) 
      printf ("%c", *s++); 
   getch();
}
