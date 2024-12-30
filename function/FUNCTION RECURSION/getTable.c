#include<stdio.h>
int i=1;// globle variable

int main()
{
    void printTable(int);//declaration
    int no;
    printf("enter the number for table: ");
    scanf("%d",&no);
	printf("Start\n");
	printTable(no);// calling Point of Function
	
	return 0;
}
void printTable(int no) // this is a function Defination
{
	//static int i=1;// static variable
	if(i<=10)
	{
		printf("%d ",no*i);	// 5 10 15 20 25
		i++;//1 2 3 4 5 6
		printTable(no);// this is a recursive calling to function itselfe.
	}else{
		printf("\nStop");
	}
}
