#include<stdio.h>
#include<string.h>
int main()
{
	 printf("Enter the String\n");
	 char ch[50];
	  gets(ch);
	   int start=0,end = strlen(ch)-1,i,next;
	   printf("String is %s\n",ch); // Ajay Sambhaji Deshmukh => Deshmukh  Sambhaji Ajay
	     
       while(start<end)
       {
       	  char temp = ch[start];
       	   ch[start]=ch[end];
       	   ch[end]=temp;
       	   start++,end--;
	   }
printf("Revserse String is %s\n",ch);  // hkumhseD ijahbmaS yajA
		 start=0 , i=0 ; 
		    while(i<=strlen(ch))
			{
				  if(ch[i]==' '|| strlen(ch)==i)
				  {
				  	 end=i-1;
				  	 next = i+1;
				  	 
				  	  while(start<end)
				       {
				       	  char temp = ch[start];
				       	   ch[start]=ch[end];
				       	   ch[end]=temp;
				       	   start++,end--;
					   }
					   
					    start=next;
				  }
				
				i++;
			 }
			 printf("Word Reverse String is %s\n",ch); 
	  
	
}