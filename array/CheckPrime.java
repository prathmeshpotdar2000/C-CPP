import java.util.*;
public class CheckPrime
{
	public static void main(String x[])
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a number :");
		int num=sc.nextInt();
		int count=0;
		for(int i=1;i<=num;i++)
		{
			if(num%i==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			System.out.printf("Prime Number");	
		}
		else
		{
			System.out.printf("Not prime number");
		}
	}
}