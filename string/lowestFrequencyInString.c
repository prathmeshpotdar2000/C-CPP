#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char a[90], temp1;
    int count = 1, temp, flag = 0, count1,count2=0;
    printf("Enter the string: ");
    gets(a);
    int len = strlen(a);
    for (int i = 0; i < len; i++)
    {
        // printf("\nouter loop character is %c ",a[i]);
        for (int j = i + 1; j < len; j++)
        {
            //  printf("\ninner loop character is %c",a[j]);
            if (a[i] == a[j])
            {

                count++;
                if (count2==0)
                {
                    count1=count;
                }
                count2++;
                if (count1 > count)
                    {
                        count1 = count;
                        temp1 = a[i];
                    }
            }
        }
        count = 1;
    }
    printf("\nhighest occurance character is %c and its count is %d", temp1, count1);
    return 0;
}
