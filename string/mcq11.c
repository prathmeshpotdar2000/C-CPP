#include<stdio.h>
#include<conio.h>
void main() 
{   static char s[ ] = "Oinks Grunts and Guffaws"; 
      printf ("%c\n",*(&s[2])); 
      printf ("%s\n",s +5) ; 
      printf ("%s\n",s); 
      printf ("%c\n",*(s +2)) ; 
      printf ("%d\n",s);
}
