#include <stdio.h>
int main(int argc, char const *argv[])
{
   int a[5];
   printf("enter five values in array: ");

   for (int i = 0; i < 5; i++)
   {
      scanf("%d", &a[i]);
   }
   printf("before assending:");
   for (int i = 0; i < 5; i++)
   {
      printf(" %d", a[i]);
   }

   for (int i = 0; i < 5; i++)
   {
      for (int j = i+1; j < 5; j++)
      {
         if (a[i] > a[j])
         {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
         }
      }
   }
   printf("\nafter assending: ");
   for (int i = 0; i < 5; i++)
   {
      printf(" %d", a[i]);
   }

   return 0;
}
