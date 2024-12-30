#include<stdio.h>
#include<conio.h>
void main() 
{ static char s[251] = "The cocaine man"; 
    int i = 0 ; 
    char ch; 
    ch = s[++i]; 
    printf ("%c%d\n", ch,i); 
    ch = s[i++]; 
    printf ("%c %d\n", ch,i); 
    ch = i++[s]; 
    printf ("%c%d\n", ch, i) ; //2
    ch = ++i[s] ;//3 
     printf ("%c%d\n", ch,i);
    // printf("%c",3);
    // for ( i = 0; i < 15; i++)
    // {
    //   printf("%d ",s[i]);
    // }
    
   getch();
}
