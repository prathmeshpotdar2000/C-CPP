#include <stdio.h>

int main(int argc, char const *argv[])
{
   int num, a, count = 0, i = 1, sum = 0, rem, flag, f, j, power = 1;
   printf("\nenter a number: ");
   scanf("%d", &num);

   //   do
   // {

   printf("\nEnter 1 for check number is prime or not");
   printf("\nEnter 2 for check number is perfect or not");
   printf("\nEnter 3 for check number is duck or not");
   printf("\nEnter 4 for check number is strong or not");
   printf("\nEnter 5 for check number is armstrong or not");
   printf("\n choose number from above alternatives: ");
   scanf("\n%d", &a);

   switch (a)
   {
   case 1:
   {
      for (int j = 1; j <= num; j++)
      {
         count = 0;
         i = 1;
         while (i <= j)
         {
            if (j % i == 0)
            {
               count++;
            }
            i++;
         }
         if (count == 2)
         {
            printf("\n%d is prime number", j);
         }
      }
   }
   break;
   case 2:
   {

      while (i < num)
      {
         if (num % i == 0)
         {
            sum = sum + i;
         }

         i++;
      }
      if (sum == num)
      {
         printf("%d is perfect number", num);
      }
      else
      {
         printf("%d is not perfect number", num);
      }
   }
   break;
   case 3:
   {
      int temp = num;
      while (num > 0)
      {
         rem = num % 10;
         if (rem == 0)
         {
            flag = 1;
         }
         num = num / 10;
      }
      if (flag == 1)
      {
         printf("%d is duck number", temp);
      }
      else
      {
         printf("%d is not duck number", temp);
      }
   }
   break;
   case 4:
   {
      int temp = num;
      while (num > 0)
      {
         rem = num % 10;
         int f = 1;
         j = rem;
         while (j != 0)
         {
            f = f * j;
            j--;
         }
         sum = sum + f;
         num = num / 10;
      }
      if (sum == temp)
      {
         printf("%d is strong number", temp);
      }
      else
      {
         printf("%d is not strong number", temp);
      }
   }
   break;

   case 5:
   {
      int temp = num;
      int temp2 = num;
      count = 0;
      while (num != 0)
      {
         count++;
         num = num / 10;
      }

      while (temp > 0)
      {
         rem = temp % 10;
         i = 1;
         power = 1;
         while (i <= count)
         {
            power = power * rem;
            i++;
         }
         sum = sum + power;
         temp = temp / 10;
      }
      if (sum == temp2)
      {
         printf("%d is armstrong number ", temp2);
      }
      else
      {
         printf("%d is not armstrong number ", temp2);
      }
   }
   break;
   default:
      printf("\ninvalid value");
      break;
   }

   // } while (a<=5);
   return 0;
}
