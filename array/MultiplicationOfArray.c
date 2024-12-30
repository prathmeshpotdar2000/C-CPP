#include<stdio.h>
	#include<conio.h>
	void main(){
	  
	   int a[3][3],b[3][3],c[3][3],i,j,k,sum=0;
	   printf("\n\nEnter values in matrix\n");
	   for(i=0; i<3; i++)
	   {
	      for(j=0;j<3; j++)
	      { scanf("%d",&a[i][j]);
	      }
	   }
	   printf("\nEnter valus in second matrix\n");
	   for(i=0;i<3; i++)
	   {
	      for(j=0;j<3; j++)
	      {  scanf("%d",&b[i][j]);
	      }
	   }
	  printf("\nDisplay first matrix\n");
	  for(i=0;i<3;i++)
	  {
	     for(j=0;j<3;j++)
	     { printf("%d\t",a[i][j]);
	     }
	     printf("\n");
	  }
	  printf("\nDisplay second matrix\n");
	  for(i=0;i<3;i++)
	  {
	     for(j=0;j<3;j++)
	     { printf("%d\t",b[i][j]);
	     }
	     printf("\n");
	  }
	  //perform matrix multiplication logics

	  for(i=0;i<3;i++)
	  {
	     for(j=0;j<3;j++)
	     {
	       sum=0;
	       for(k=0;k<3;k++)
	       {  sum = sum+a[i][k]*b[k][j];
	       }
	       c[i][j]=sum;
	     }
	  }
	  printf("\nDisplay resultant matrix\n");
	  for(i=0;i<3;i++)
	  {
	     for(j=0;j<3;j++)
	     {
	       printf("%d\t",c[i][j]);
	     }
	     printf("\n");
	  }
	   getch();
	}
