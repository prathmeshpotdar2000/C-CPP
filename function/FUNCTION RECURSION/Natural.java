import java.util.*;
public class Natural
{
  static void getNatural(int no,int i)
  {
    
    if(i<=no)
    {
      System.out.println(i);
      i++;
       getNatural(no,i);
    }
  }
  
 public static void main(String x[])
 {
  Scanner sc=new Scanner(System.in);
  System.out.println("enter the number: ");
  int no=sc.nextInt(); 
  getNatural(no,1);
  
 }
}