#include<stdio.h>
void main()

{int n;

printf("Enter the number\n");

scanf("%d",&n);

int i,m=n,t=n,r,s;

for(i=0;i<9;i++)

{s=0;

while(m>0)

{r=m%10;

s=s+r*r;

m/=10;

}

m=s;

}

if(s==1)

printf("Happy Number\n");

else

printf("Not a Happy number\n");

}