#include<stdio.h>
#include<conio.h>
void main() 
{   static char s[ ] = "C it for yourself"; 
     int i = 0 ; 
     while (s[i])
      { 
           if(s[i]!=' ') 
           s[i] = s[i] + i ; 
            i++; 
     } 
     printf ("%s",s); 
   getch();
}
