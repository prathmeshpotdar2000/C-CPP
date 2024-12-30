#include<stdio.h>
#include<string.h>
void main() 
{  static char s[ ] = "Rendezvous!"; 
   printf ("%d", *( s + strlen (s))) ;  
     
    //  for (int i = 0; i < strlen (s); i++)
    //  {
    //    printf ("\n%d", *( s + i)) ; 
    //  }
     
}
